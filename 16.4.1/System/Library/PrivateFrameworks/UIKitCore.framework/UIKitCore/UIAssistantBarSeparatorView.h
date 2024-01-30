@class UIView;

@interface UIAssistantBarSeparatorView : UIView

@property (retain, nonatomic) UIView *innerSeparatorView;

+ (double)preferredWidth;

- (void)didMoveToWindow;
- (void)_updateVisualStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)_usesLightStyle;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
