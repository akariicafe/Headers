@class UIView;

@interface HRWDVisualEffectView : UIVisualEffectView

@property (retain, nonatomic) UIView *tintView;

+ (id)tintViewWithBlurEffectStyle:(long long)a0 color:(id)a1;
+ (id)ultraLightTintView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;

@end
