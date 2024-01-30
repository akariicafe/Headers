@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyWrapper

@property (nonatomic) double value;
@property (readonly, nonatomic) double presentationValue;
@property (nonatomic) double velocity;

- (id)_floatAnimatableProperty;

@end
