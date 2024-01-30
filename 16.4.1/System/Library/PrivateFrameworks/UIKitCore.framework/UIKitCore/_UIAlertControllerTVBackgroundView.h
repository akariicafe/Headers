@class NSString, NSMutableDictionary, UIView, _UIFloatingShadowView;

@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    BOOL _isHighlighted;
    BOOL _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
}

@property (nonatomic) BOOL shouldShowShadow;
@property (nonatomic) BOOL shouldUseTintColorAsBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })backgroundInsetAmount;

- (void)setPressed:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (double)_alphaForHighlighted:(BOOL)a0 pressed:(BOOL)a1;
- (id)_displayedBackgroundColor;
- (double)alphaForState:(unsigned long long)a0;
- (void)setAlpha:(double)a0 forState:(unsigned long long)a1;
- (void)setRoundedCornerPosition:(unsigned long long)a0;

@end
