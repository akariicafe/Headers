@class UICubicTimingParameters, UISpringTimingParameters;

@interface SLDisambiguationCollectionViewAnimator : UIViewPropertyAnimator <UITimingCurveProvider>

@property (readonly, nonatomic) long long timingCurveType;
@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;

+ (id)springAnimation;
+ (id)init;

- (id)commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
