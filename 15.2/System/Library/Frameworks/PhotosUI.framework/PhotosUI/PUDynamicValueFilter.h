@interface PUDynamicValueFilter : PUValueFilter

@property (nonatomic) double targetValue;
@property (nonatomic) double currentTime;

- (double)outputValue;
- (void)setInputValue:(double)a0;
- (id)init;
- (void)_update;
- (double)outputValueChangeRate;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1 timeInterval:(double)a2;

@end
