@class UIView;

@interface _HKDateContentLayout : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dateView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)_viewCount;
- (void)_invalidateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_maximumViewWidth;
- (double)_totalViewHeight;

@end
