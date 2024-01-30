@class UIView;

@interface GKCenteringScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;

- (void)dealloc;
- (void)layoutSubviews;
- (void)centerContentViewIfDesirable;

@end
