@class UIScrollView, UIView;

@interface CSTodayPageView : CSPageViewBase

@property (retain, nonatomic) UIView *todayView;
@property (retain, nonatomic) UIScrollView *widgetMajorScrollView;
@property (nonatomic) double navigationBarTopInset;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutTodayView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
