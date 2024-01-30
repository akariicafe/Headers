@interface PUValueFilter : NSObject

@property (nonatomic) double currentValue;

- (id)initWithValue:(double)a0;
- (id)init;
- (void)setInputValue:(double)a0;
- (double)outputValue;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
