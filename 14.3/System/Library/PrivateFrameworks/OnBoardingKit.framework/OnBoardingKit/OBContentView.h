@class UIColor, UIView;

@interface OBContentView : UIView

@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) BOOL aboveHeaderLayout;
@property (nonatomic) BOOL customizedBackgroundColor;
@property (weak, nonatomic) UIView *bleedView;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)_defaultColorForCurrentTraitCollection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 aboveHeaderLayout:(BOOL)a1;
- (BOOL)_colorIsDefault:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
