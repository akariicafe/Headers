@class UIColor, _HKReferenceRangeDotViewDot;

@interface HKReferenceRangeDotView : UIView

@property (retain, nonatomic) UIColor *dotColor;
@property (weak, nonatomic) _HKReferenceRangeDotViewDot *dotView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })desiredDotViewFrame;

@end
