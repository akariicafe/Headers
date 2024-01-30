@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject

@property (nonatomic) struct CGVector { double dx; double dy; } offset;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) struct CGVector { double dx; double dy; } totalTranslation;
@property (nonatomic) BOOL hasMemoizedVelocity;
@property (nonatomic) struct CGVector { double dx; double dy; } memoizedVelocity;
@property (nonatomic) double resetHysteresisOnSampleThetaDiff;
@property (copy, nonatomic) id /* block */ didResetHysteresisOnThetaDiffHandler;
@property (nonatomic) double minimumRequiredMovement;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) double hysteresisTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)addSample:(struct CGPoint { double x0; double x1; })a0;
- (void)reset;
- (long long)_sampleCount;
- (BOOL)hasVelocity;
- (struct CGVector { double x0; double x1; })_computedVelocity;

@end
