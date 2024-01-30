@class NSString, NSHashTable, NCNotificationRequest, UIViewController;
@protocol NCNotificationCustomContent, NCExpandedPlatterViewControllerDelegate, NCNotificationStaticContentProviding, PLExpandedPlatterDismissing;

@interface NCExpandedPlatterViewController : UIViewController <PLExpandedPlatterDismissing, NCExpandedPlatterViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentable, NCExpandedPlatterObservable, NCExpandedPlatterObserving> {
    id<NCNotificationStaticContentProviding> _staticContentProvider;
    NSHashTable *_observers;
    NSString *_dismissalReason;
    int _expandedPlatterPresentationState;
}

@property (copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) id /* block */ pendingPresentationTransitionDidEndBlock;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (readonly, nonatomic) UIViewController<NCNotificationCustomContent> *customContentViewController;
@property (weak, nonatomic) id<NCExpandedPlatterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PLExpandedPlatterDismissing> dismisser;

+ (void)initialize;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)expandedPlatterWillPresent:(id)a0;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void)_updateWithProvidedStaticContent;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)customContent:(id)a0 didUpdateUserNotificationActions:(id)a1;
- (void)expandedPlatter:(id)a0 didDismissWithReason:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)expandedPlatter:(id)a0 willDismissWithReason:(id)a1;
- (void)expandedPlatterDidPresent:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)keyboardWillShow:(id)a0;
- (void)_updateWithProvidedCustomContent;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)customContent:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotification:(id)a2 withUserInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)customContent:(id)a0 forwardAction:(id)a1 forNotification:(id)a2 withUserInfo:(id)a3;
- (void)customContentRequestsDefaultAction:(id)a0;
- (void)customContentRequestsDismiss:(id)a0;
- (void)customContentDidLoadExtension:(id)a0;
- (void)customContentDidUpdateTitle:(id)a0;
- (void)expandedPlatterPresentable:(id)a0 requestsDismissalWithTrigger:(long long)a1;
- (void)playMedia;
- (void)_setCustomContentViewController:(id)a0;
- (id)_expandedPlatterViewIfLoaded;
- (void)_setupStaticContentProviderIfNecessary;
- (struct CGSize { double x0; double x1; })_maximumPlatterSize;
- (BOOL)_canTransitionToPlatterPresentationState:(int)a0;
- (void)userInteractionWillBeginForExpandedPlatter:(id)a0;
- (void)userInteractionDidEndForExpandedPlatter:(id)a0;
- (id)_expandedPlatterViewLoadingIfNecessary:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_preferredCustomContentSize;
- (void)_updatePreferredCustomContentSize;
- (void)_handleDefaultTap:(id)a0;
- (void)expandedPlatterView:(id)a0 requestsInteractionWithURL:(id)a1;
- (BOOL)expandedPlatterView:(id)a0 tapGestureRecognizerShouldReceiveTouch:(id)a1;
- (void)addExpandedPlatterObserver:(id)a0;
- (void)removeExpandedPlatterObserver:(id)a0;
- (id)initWithNotificationRequest:(id)a0 customContentViewController:(id)a1;
- (id)_expandedPlatterView;

@end
