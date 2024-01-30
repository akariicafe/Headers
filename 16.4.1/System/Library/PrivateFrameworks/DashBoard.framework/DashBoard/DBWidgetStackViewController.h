@class NSArray;

@interface DBWidgetStackViewController : UIViewController

@property (retain, nonatomic) NSArray *currentConstraints;
@property (retain, nonatomic) NSArray *widgetViewControllers;
@property (readonly, nonatomic) unsigned long long visibleCount;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_reloadConstraints;
- (void)_setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)animateUpdateForWidgetViewController:(id)a0 updateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)animateWithUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (id)linearFocusItems;

@end
