@class NSMutableArray, UIView;

@interface CACContainerViewController : UIViewController {
    UIView *_viewAboveContainedViews;
}

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (readonly, nonatomic) UIView *viewAboveContainedViews;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void)installViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)uninstallViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
