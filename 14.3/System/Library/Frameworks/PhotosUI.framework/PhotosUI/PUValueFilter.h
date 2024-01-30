@interface PUValueFilter : NSObject

@property (nonatomic) double currentValue;

- (id)init;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1;
- (id)initWithValue:(double)a0;
- (double)outputValue;
- (void)setInputValue:(double)a0;

@end
