@class NSString, NCNotificationTextInputView, NCNotificationRequest, UIViewController;
@protocol NCNotificationCustomContent, NCNotificationCustomContentDelegate;

@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent>

@property (retain, nonatomic) UIViewController<NCNotificationCustomContent> *contentViewController;
@property (retain, nonatomic) NCNotificationTextInputView *inputAccessoryView;
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *title;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate;
@property (readonly, nonatomic) NSString *contentExtensionIdentifier;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)userInteractionEnabled;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)cancelTouches;
- (void)viewDidLoad;
- (id)initWithNotificationRequest:(id)a0;
- (BOOL)didReceiveNotificationRequest:(id)a0;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;
- (BOOL)performAction:(id)a0 forNotification:(id)a1;
- (void)customContent:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotification:(id)a2 withUserInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)customContent:(id)a0 forwardAction:(id)a1 forNotification:(id)a2 withUserInfo:(id)a3;
- (void)customContentRequestsDefaultAction:(id)a0;
- (void)customContentRequestsDismiss:(id)a0;
- (void)customContentDidLoadExtension:(id)a0;
- (void)customContentDidUpdateTitle:(id)a0;
- (void)customContent:(id)a0 didUpdateUserNotificationActions:(id)a1;
- (unsigned long long)customContentLocation;
- (void)_loadContentViewControllerForNotificationRequest:(id)a0;
- (void)_setupQuickReplyForNotificationRequest:(id)a0;
- (void)_setupContentViewController:(id)a0;
- (void)_setupQuickReplyForNotificationAction:(id)a0;
- (BOOL)performAction:(id)a0 forNotification:(id)a1 withUserInfo:(id)a2;
- (BOOL)defaultContentHidden;
- (BOOL)overridesDefaultTitle;
- (void)playMedia;
- (id)_textInputActionInNotification:(id)a0;
- (void)_removeInputAccessoryView:(id)a0;
- (void)notificationTextInputView:(id)a0 didConfirmText:(id)a1 forAction:(id)a2;
- (BOOL)allowManualDismiss;

@end
