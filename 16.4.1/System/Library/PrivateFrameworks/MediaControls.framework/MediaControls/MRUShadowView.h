@class UIColor;

@interface MRUShadowView : UIView

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) id compositingFilter;
@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) double radius;
@property (nonatomic) float opacity;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
