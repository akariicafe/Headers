@class UIColor, UIView;

@interface VUISeparatorView : UIView

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) double lineHeight;

- (id)lineColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)initializeVUISeparatorView;
- (void)_updateLineColor;

@end
