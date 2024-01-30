@class NSArray;

@interface _PXActionStackedViewController : UIViewController {
    double _separatorHeight;
    NSArray *_separatorViews;
}

@property (readonly, copy, nonatomic) NSArray *viewControllers;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithViewControllers:(id)a0;

@end
