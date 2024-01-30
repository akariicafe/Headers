@class PKPaymentAuthorizationFlowCoordinator, NSDictionary, SBSRemoteAlertHandle, PKPaymentAuthorizationPresentationTarget, PKAsyncTaskProgressTracker, NSString;

@interface PKPaymentAuthorizationPresentersCoordinator : NSObject <PKPaymentAuthorizationScenePresenter, PKPaymentAuthorizationFlowCoordinatorDelegate, SBSRemoteAlertHandleObserver>

@property (copy, nonatomic) NSDictionary *hostUserInfo;
@property (retain, nonatomic) PKPaymentAuthorizationPresentationTarget *primaryTarget;
@property (retain, nonatomic) PKPaymentAuthorizationPresentationTarget *secondaryTarget;
@property (retain, nonatomic) SBSRemoteAlertHandle *secondaryTargetAlertHandle;
@property (retain, nonatomic) PKPaymentAuthorizationFlowCoordinator *flowCoordinator;
@property (retain, nonatomic) PKAsyncTaskProgressTracker *invalidationTracker;
@property (nonatomic) BOOL shouldRequestSecondaryViewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coordinatorForHostWithUserInfo:(id)a0;
+ (void)coordinatorDidInvalidate:(id)a0;
+ (id)coordinators;
+ (void)invalidateCoordinators:(id)a0;

- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)supportsSecondaryViewController;
- (void)askForDismissalWithReason:(unsigned long long)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)configureSceneWithPrimaryPresentationMode:(long long)a0;
- (void)dismissSceneAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissSecondaryViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)flowCoordinatorDidInvalidate;
- (BOOL)handleHomeButtonPressedInViewController:(id)a0;
- (id)initWithHostUserInfo:(id)a0;
- (void)invalidateSecondaryAlert;
- (BOOL)isPresentationModeForPrimaryViewController:(long long)a0;
- (void)notifyOnInvalidated:(id /* block */)a0;
- (void)presentPrimaryViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentSecondaryViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)primaryViewController:(id)a0 didActivateWithPresentationMode:(long long)a1;
- (void)requestSecondaryViewControllerPresenterIfNecessary;
- (void)secondaryViewController:(id)a0 didActivateWithPresentationMode:(long long)a1;
- (BOOL)shouldSecondaryViewControllerBeRequestedInSceneWithPresentationMode:(long long)a0;
- (void)viewController:(id)a0 didActivateWithPresentationMode:(long long)a1;
- (void)viewControllerDidInvalidate:(id)a0;
- (void)viewControllerWillAppear:(id)a0;
- (void)viewControllerWillDisappear:(id)a0;

@end
