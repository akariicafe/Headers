@class NSString;

@interface BWRamp : NSObject {
    NSString *_name;
    int _currentIteration;
    float _startValue;
    float _targetValue;
    int _durationInIterations;
    int _shape;
    float _exponentialConvergenceFraction;
    float _exponentialSnapFraction;
}

@property (readonly, nonatomic) BOOL isRamping;
@property (readonly, nonatomic) float currentValue;
@property (readonly, nonatomic) BOOL isRampingUp;

+ (void)initialize;

- (id)initWithName:(id)a0;
- (void)startRampFrom:(float)a0 to:(float)a1 iterations:(int)a2 shape:(int)a3 exponentialConvergenceFraction:(float)a4;
- (void)startRampFrom:(float)a0 to:(float)a1 iterations:(int)a2 shape:(int)a3;
- (void)dealloc;
- (float)updateRampForNextIteration;
- (id)init;
- (void)reset;

@end
