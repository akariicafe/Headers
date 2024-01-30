@class NSString;
@protocol SKUINavigationStackObserver;

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUINavigationStackObserver> navigationStackObserver;
@property (nonatomic, getter=isShowingNavigationStackRootContent) BOOL showingNavigationStackRootContent;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (double)_scrollViewBottomContentInsetForViewController:(id)a0;
- (void)_observedNavigationStackDidChange;
- (void)popToNavigationStackRootContentAnimated:(BOOL)a0 withBehavior:(long long)a1;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;

@end
