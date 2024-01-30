@class SKUIViewControllerContainerView, UIView, NSIndexPath, UIViewController;

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {
    SKUIViewControllerContainerView *_viewControllerContainerView;
}

@property (nonatomic) double maximumContentWidth;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) UIView *viewControllerContainerView;
@property (nonatomic) BOOL managesViewControllerContainerViewLayout;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)a0;

@end
