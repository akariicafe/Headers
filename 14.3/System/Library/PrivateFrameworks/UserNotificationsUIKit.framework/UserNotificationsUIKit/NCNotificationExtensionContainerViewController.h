@class UIView, NSExtension, NSString, NCNotificationExtensionHostViewController, NCMediaPlayPauseButton, NCNotificationRequest, _UNNotificationContentExtensionHostContext, NSMutableArray;
@protocol NCNotificationCustomContentDelegate;

@interface NCNotificationExtensionContainerViewController : UIViewController <_UNNotificationContentExtensionHostContextDelegate, NCNotificationCustomContent> {
    unsigned long long _customContentLocation;
}

@property (retain, nonatomic) NSExtension *extension;
@property (nonatomic) double contentSizeRatio;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (retain, nonatomic) NCNotificationExtensionHostViewController *extensionViewController;
@property (retain, nonatomic) _UNNotificationContentExtensionHostContext *extensionHostContext;
@property (retain, nonatomic) UIView *blockingView;
@property (retain, nonatomic) NCMediaPlayPauseButton *mediaPlayPauseButton;
@property (nonatomic) BOOL allowManualDismiss;
@property (nonatomic) BOOL defaultContentHidden;
@property (nonatomic) BOOL overridesDefaultTitle;
@property (nonatomic) BOOL userInteractionEnabled;
@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (nonatomic) BOOL shouldPlayMediaAfterExpanded;
@property (retain, nonatomic) NSMutableArray *updatedActions;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *contentExtensionIdentifier;

+ (BOOL)isMediaSafetyNetEnabled;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canBecomeFirstResponder;
- (void)setTitle:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)cancelTouches;
- (void)viewDidLoad;
- (BOOL)didReceiveNotificationRequest:(id)a0;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;
- (BOOL)performAction:(id)a0 forNotification:(id)a1;
- (unsigned long long)customContentLocation;
- (BOOL)performAction:(id)a0 forNotification:(id)a1 withUserInfo:(id)a2;
- (void)playMedia;
- (id)initWithExtension:(id)a0 forNotificationRequest:(id)a1 customContentLocation:(unsigned long long)a2;
- (void)_teardownExtension;
- (void)_loadExtensionViewController;
- (double)_contentHeightForWidth:(double)a0;
- (void)_flushQueuedRequests;
- (id)_responseForAction:(id)a0 notification:(id)a1 response:(id)a2;
- (void)_playMediaAfterExpanded;
- (void)_setupMediaButton;
- (id)_requestActionForActionIdentifier:(id)a0;
- (void)_mediaPlayPauseButtonTapped:(id)a0;
- (void)_addExtensionViewFromViewController:(id)a0;
- (void)_setupExtensionViewController:(id)a0;
- (void)notificationExtension:(id)a0 extensionDidCompleteResponse:(id)a1 withOption:(unsigned long long)a2;
- (void)notificationExtensionDidUpdatePlayPauseMediaButton:(id)a0;
- (void)notificationExtension:(id)a0 didUpdateTitle:(id)a1;
- (void)notificationExtension:(id)a0 didUpdateNotificationActions:(id)a1;
- (void)notificationExtensionMediaPlayingDidStart:(id)a0;
- (void)notificationExtensionMediaPlayingDidPause:(id)a0;
- (void)notificationExtensionRequestsDefaultAction:(id)a0;
- (void)notificationExtensionRequestsDismiss:(id)a0;

@end
