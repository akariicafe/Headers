@class NSArray;

@interface _PXActionStackedViewController : UIViewController {
    double _separatorHeight;
    NSArray *_separatorViews;
}

@property (readonly, copy, nonatomic) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithViewControllers:(id)a0;
- (void)viewWillLayoutSubviews;

@end
