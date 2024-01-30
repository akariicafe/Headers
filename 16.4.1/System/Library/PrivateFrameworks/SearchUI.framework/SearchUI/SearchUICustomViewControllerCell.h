@class UIViewController, UIView;

@interface SearchUICustomViewControllerCell : UICollectionViewCell

@property (retain) UIView *hostedView;
@property (retain, nonatomic) UIViewController *embeddedViewController;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
