@class UIColor, UIView;

@interface VUISeparatorView : VUIBaseView

@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) double lineHeight;

- (id)lineColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_traitCollectionDidChange:(id)a0;
- (void)_updateLineColor;
- (void)initializeVUISeparatorView;

@end
