@class UIView;

@interface GKCenteringScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)centerContentViewIfDesirable;

@end
