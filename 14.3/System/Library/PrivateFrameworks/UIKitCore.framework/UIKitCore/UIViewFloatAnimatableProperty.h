@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase

@property (retain, nonatomic) UIAnimatableProperty *animatableProperty;
@property (retain, nonatomic) _UIViewAnimatablePropertyTransformer *transformer;
@property (nonatomic) BOOL performingInterpolationBetweenTwoStates;
@property (nonatomic) double value;
@property (readonly, nonatomic) double presentationValue;
@property (nonatomic) double velocity;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end
