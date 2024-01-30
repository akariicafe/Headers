@class UIControl, UISegmentedControl, UIView;

@interface _HKReportSegmentControl : UIView

@property (readonly, nonatomic) UISegmentedControl *segmentControl;
@property (readonly, nonatomic) UIView *dividerView;
@property (readonly, nonatomic) UIControl *rightControl;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 dividerColor:(id)a2 rightControl:(id)a3;

@end
