@class NSString;
@protocol SKUINavigationStackObserver;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUINavigationStackObserver> navigationStackObserver;
@property (nonatomic, getter=isShowingNavigationStackRootContent) BOOL showingNavigationStackRootContent;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (double)_scrollViewBottomContentInsetForViewController:(id)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;
- (void)popToNavigationStackRootContentAnimated:(BOOL)a0 withBehavior:(long long)a1;
- (void)_observedNavigationStackDidChange;

@end
