@class NSTimer, CKAvatarPickerViewController, NSString, CKConversation, CKNavigationBarCanvasView, NSMutableArray, UIButton, IMBalloonPlugin, UILabel;
@protocol CKFullScreenAppNavbarManagerDelegate;

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate>

@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *appIconButton;
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;
@property (retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) NSMutableArray *notificationViews;
@property (retain, nonatomic) NSTimer *notificationTimer;
@property (retain, nonatomic) UILabel *defaultTitleLabel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<CKFullScreenAppNavbarManagerDelegate> delegate;
@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)dealloc;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)a0;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)a0;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)a0;
- (void)_updateTitleView;
- (void)_handleChatItemDidChange:(id)a0;
- (void)_handleChatDisplayNameChange:(id)a0;
- (void)_contactPhotosEnabledChangedNotification:(id)a0;
- (void)_configureCanvasView;
- (void)_updateDismissButton;
- (BOOL)_canShowAvatarView;
- (void)_updateTitleLabelText;
- (BOOL)_didReceiveMessageChatItem:(id)a0 addedChatItems:(id)a1;
- (BOOL)_shouldStartnotificationQueue;
- (void)_startNotificationQueue;
- (void)_addNotificationViewToQueue;
- (void)_removeAllNotifications;
- (void)_dequeueNotificationViews:(id)a0;
- (long long)_viewModeForCalloutView;
- (void)dismissNotifications;
- (id)initWithConversation:(id)a0 plugin:(id)a1;

@end
