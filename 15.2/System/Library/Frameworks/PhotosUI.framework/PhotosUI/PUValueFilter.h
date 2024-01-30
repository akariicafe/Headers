@interface PUValueFilter : NSObject

@property (nonatomic) double currentValue;

- (double)outputValue;
- (void)setInputValue:(double)a0;
- (id)init;
- (id)initWithValue:(double)a0;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
