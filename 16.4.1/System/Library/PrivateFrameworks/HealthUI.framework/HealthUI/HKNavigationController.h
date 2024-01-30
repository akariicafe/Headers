@class NSString, HKProfileBarButtonItem;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate> {
    HKProfileBarButtonItem *_commonProfileBarButtonItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (id)commonProfileBarButtonItem;
- (void)didChangeToAnotherTab;
- (void)didTapTabBarIcon;
- (id)initLargeTitlesNavigationControllerWithRootViewController:(id)a0;

@end
