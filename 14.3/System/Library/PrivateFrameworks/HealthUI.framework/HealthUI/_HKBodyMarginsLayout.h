@class UIView;

@interface _HKBodyMarginsLayout : UIView

@property (retain, nonatomic) UIView *leftMarginView;
@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) UIView *rightMarginView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_invalidateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_totalViewWidth;
- (double)_maximumViewHeight;

@end
