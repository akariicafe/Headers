@class UIView;

@interface HRWDVisualEffectView : UIVisualEffectView

@property (retain, nonatomic) UIView *tintView;

+ (id)tintViewWithBlurEffectStyle:(long long)a0 color:(id)a1;
+ (id)ultraLightTintView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithEffect:(id)a0;

@end
