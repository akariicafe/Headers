@class NSString, NSMutableArray;

@interface SBTouchHistory : NSObject <SBGestureRecognizerTouchHistoryProviding> {
    unsigned long long _depth;
    NSMutableArray *_locations;
    NSMutableArray *_timestamps;
    double _peakSpeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (id)init;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (int)touchHistoryDepthForTimeDuration:(double)a0 forComputingDerivative:(BOOL)a1;
- (void)updateWithLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)initWithDepth:(unsigned long long)a0;

@end
