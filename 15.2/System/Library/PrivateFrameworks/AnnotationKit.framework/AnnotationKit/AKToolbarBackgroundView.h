@class UIColor, UIVisualEffectView, UIView;

@interface AKToolbarBackgroundView : UIView {
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) long long blurStyle;

- (void)setBackgroundImage:(id)a0 forToolbarPosition:(long long)a1 barMetrics:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setShadowImage:(id)a0 forToolbarPosition:(long long)a1;
- (void)setOpaque:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)_hostSeparatorInView:(id)a0;
- (void)updateSeparatorVisibility;

@end
