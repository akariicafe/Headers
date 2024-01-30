@class MTStylingProvidingSolidColorView, UIView;

@interface SBHAddWidgetButton : UIButton

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mt_removeAllVisualStyling;
- (void)mt_applyVisualStyling:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
