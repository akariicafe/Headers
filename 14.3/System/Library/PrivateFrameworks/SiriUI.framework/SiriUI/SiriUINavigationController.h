@class _SiriUINavigationControllerDelegateAdapter, NSString;
@protocol SiriUINavigationTransitioning;

@interface SiriUINavigationController : UINavigationController <UIGestureRecognizerDelegate>

@property (retain, nonatomic, getter=_delegateAdapter, setter=_setDelegateAdapter:) _SiriUINavigationControllerDelegateAdapter *delegateAdapter;
@property (retain, nonatomic) id<SiriUINavigationTransitioning> transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sharedInit;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)delegate;
- (void)viewDidLoad;
- (void)_handleGestureFromRecognizer:(id)a0;

@end
