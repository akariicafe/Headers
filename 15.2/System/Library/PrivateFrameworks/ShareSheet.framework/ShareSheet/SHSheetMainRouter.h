@class UINavigationController, UIViewController, NSString;
@protocol SHSheetContentViewInterface, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetMainRouter : NSObject <SHSheetActivityPerformerPresentationInterface, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UINavigationController *mainNavigationController;
@property (weak, nonatomic) UINavigationController *secondaryNavigationController;
@property (weak, nonatomic) UINavigationController *userDefaultsNavigationController;
@property (weak, nonatomic) UIViewController<SHSheetContentViewInterface> *mainViewController;
@property (weak, nonatomic) UIViewController<SHSheetContentViewInterface> *secondaryViewController;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (retain, nonatomic) UIViewController *currentViewControllerForActivityBeingListened;
@property (nonatomic) BOOL listenForDismissalTransition;
@property (copy, nonatomic) id /* block */ listenerCompletionHandler;
@property (readonly, weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) id<SHSheetActivityPerformerPresentationInterface> activityPresentationController;
@property (readonly, nonatomic) BOOL isPresentedWithinPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;
- (void)_configureMainViewController:(id)a0;
- (void)dismissSecondaryViewControllerAnimated:(BOOL)a0;
- (void)installAirdropViewController:(id)a0;
- (void)presentMainViewController:(id)a0 withNavigationControllerSupport:(BOOL)a1;
- (void)dismissForActivityPerformerResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissUserDefaultsViewControllerAnimated:(BOOL)a0;
- (void)presentUserDefaultsViewController:(id)a0;
- (void)presentAirdropViewController:(id)a0;
- (void)_installChildViewController:(id)a0 forParentViewController:(id)a1;
- (void)_presentViewController:(id)a0;
- (void)_configureAirdropViewController:(id)a0;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)a0;
- (void)_dismissOptionsViewController;
- (void)presentOptionsViewController:(id)a0;
- (void)presentSecondaryViewController:(id)a0;
- (void)presentAlertController:(id)a0;
- (void)activityPerformCleanUpPresentation:(id)a0;
- (void)activityPerformerStopListeningForDismissalTransition:(id)a0;
- (BOOL)activityPerformerCanPresent:(id)a0;
- (BOOL)activityPerformer:(id)a0 presentPopoverContentViewController:(id)a1;
- (void)activityPerformer:(id)a0 startListeningForDismissalTransitionWithCompletion:(id /* block */)a1;
- (void)activityPerformer:(id)a0 preparePresentationWithContext:(id)a1 completion:(id /* block */)a2;
- (void)activityPerformer:(id)a0 presentViewController:(id)a1 completion:(id /* block */)a2;

@end
