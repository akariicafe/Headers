@class UIView;

@interface _HKDateContentLayout : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dateView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_invalidateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)_viewCount;
- (id)init;
- (double)_maximumViewWidth;
- (double)_totalViewHeight;

@end
