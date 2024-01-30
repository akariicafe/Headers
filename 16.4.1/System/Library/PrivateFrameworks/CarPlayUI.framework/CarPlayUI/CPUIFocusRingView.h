@class UIBezierPath, UIColor;

@interface CPUIFocusRingView : UIView

@property (retain, nonatomic) UIBezierPath *focusPath;
@property (retain, nonatomic) UIBezierPath *insetFocusPath;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *ringColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateFocusRect;

@end
