@class UIColor, UIVisualEffectView, UIView;

@interface AKToolbarBackgroundView : UIView {
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) long long blurStyle;

- (void)setOpaque:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0 forToolbarPosition:(long long)a1 barMetrics:(long long)a2;
- (void)setShadowImage:(id)a0 forToolbarPosition:(long long)a1;
- (void)_hostSeparatorInView:(id)a0;
- (void)updateSeparatorVisibility;

@end
