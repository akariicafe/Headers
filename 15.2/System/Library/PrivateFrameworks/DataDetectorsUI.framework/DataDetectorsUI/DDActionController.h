@class UIWindow, NSString, UIAlertController, UIView, DDAction, UIViewController;
@protocol DDDetectionControllerInteractionDelegate;

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {
    UIViewController *_presentedViewController;
    UIViewController *_currentBaseViewController;
    UIWindow *_originalWindow;
    NSString *_idsListenerID;
}

@property (retain) DDAction *currentAction;
@property (retain, nonatomic) id<DDDetectionControllerInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIAlertController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForPopoverPresentation:(id)a0;
- (void)_cleanup;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void)performAction:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)cancelAction;
- (void).cxx_destruct;
- (id)init;
- (void)actionDidFinish:(id)a0;
- (void)actionDidFinish:(id)a0 shouldDismiss:(BOOL)a1;
- (BOOL)isPerformingAction;
- (void)dealloc;
- (id)actionsForURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (BOOL)actionIsCancellable;
- (BOOL)isPresentingInPopover;
- (void)action:(id)a0 presentationShouldBeModal:(BOOL)a1;
- (BOOL)facetimeAvailable;
- (id)actionsForURL:(id)a0 result:(struct __DDResult { } *)a1 enclosingResult:(struct __DDResult { } *)a2 context:(id)a3;
- (void)_willPresentViewController;
- (void)_presentCurrentViewControllerOurselves;
- (void)tellDelegateActionDidFinishShouldDismiss:(BOOL)a0;
- (void)_didDismissActionViewController;
- (void)tellDelegateActionDidFinish;
- (void)_dismissCurrentViewControllerOurselves;
- (BOOL)presentingAreaIsLargeEnough;
- (void)viewControllerRequiresModalInPopover:(BOOL)a0;
- (void)_presentController:(id)a0;
- (void)dismissCurrentController;
- (void)cleanupNoDismiss;
- (id)defaultActionForURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (void)action:(id)a0 viewControllerReady:(id)a1;
- (void)failedToPrepareViewControllerForAction:(id)a0;

@end
