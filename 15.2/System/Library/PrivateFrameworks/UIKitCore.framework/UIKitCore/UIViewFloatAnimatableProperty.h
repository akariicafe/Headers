@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase

@property (retain, nonatomic) UIAnimatableProperty *animatableProperty;
@property (retain, nonatomic) _UIViewAnimatablePropertyTransformer *transformer;
@property (nonatomic) BOOL performingInterpolationBetweenTwoStates;
@property (nonatomic) double value;
@property (readonly, nonatomic) double presentationValue;
@property (nonatomic) double velocity;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
