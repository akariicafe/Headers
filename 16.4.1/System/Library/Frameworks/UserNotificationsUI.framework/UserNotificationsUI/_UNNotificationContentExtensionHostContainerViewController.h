@class UIView, NSString, NSExtension, NSArray, _UNNotificationContentExtensionHostContext, _UNMediaPlayPauseButton, NSMutableArray, _UIRemoteViewController;
@protocol _UNNotificationContentExtensionHostContainerViewControllerDelegate;

@interface _UNNotificationContentExtensionHostContainerViewController : UIViewController <_UNNotificationContentExtensionHostContextDelegate>

@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic) double contentSizeRatio;
@property (copy, nonatomic) NSString *notificationRequestIdentifier;
@property (retain, nonatomic) _UIRemoteViewController *extensionViewController;
@property (retain, nonatomic) _UNNotificationContentExtensionHostContext *extensionHostContext;
@property (retain, nonatomic) UIView *blockingView;
@property (retain, nonatomic) _UNMediaPlayPauseButton *mediaPlayPauseButton;
@property (nonatomic) BOOL allowManualDismiss;
@property (nonatomic, getter=isDefaultContentHidden) BOOL defaultContentHidden;
@property (nonatomic, getter=isDefaultTitleOverridden) BOOL defaultTitleOverridden;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (retain, nonatomic) NSMutableArray *queuedNotifications;
@property (nonatomic) BOOL shouldPlayMediaAfterPresented;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, nonatomic) BOOL extensionWantsToReceiveActionResponses;
@property (weak, nonatomic) id<_UNNotificationContentExtensionHostContainerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMediaSafetyNetEnabled;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)didReceiveNotification:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)pauseMedia;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)resignFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canResignFirstResponder;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (id)cancelTouchesForCurrentEventInExtension;
- (id)initWithExtension:(id)a0 notification:(id)a1 actions:(id)a2;
- (void)playMedia;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;
- (void)_addExtensionViewFromViewController:(id)a0;
- (double)_contentHeightForWidth:(double)a0;
- (void)_flushQueuedRequests;
- (void)_loadExtensionViewController;
- (void)_mediaPlayPauseButtonTapped:(id)a0;
- (void)_pauseMediaIfPresented;
- (void)_playMediaIfPresented;
- (void)_setupExtensionViewController:(id)a0;
- (void)_setupMediaButton;
- (void)_teardownExtension;
- (void)notificationExtension:(id)a0 didUpdateNotificationActions:(id)a1;
- (void)notificationExtension:(id)a0 didUpdateTitle:(id)a1;
- (void)notificationExtension:(id)a0 extensionDidCompleteResponse:(id)a1 withOption:(unsigned long long)a2;
- (void)notificationExtensionDidUpdatePlayPauseMediaButton:(id)a0;
- (void)notificationExtensionMediaPlayingDidPause:(id)a0;
- (void)notificationExtensionMediaPlayingDidStart:(id)a0;
- (void)notificationExtensionRequestsDefaultAction:(id)a0;
- (void)notificationExtensionRequestsDismiss:(id)a0;

@end
