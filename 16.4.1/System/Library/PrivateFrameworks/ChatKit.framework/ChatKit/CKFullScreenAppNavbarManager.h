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

- (void)_invalidateTimer;
- (void)_updateTitleView;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_addNotificationViewToQueue;
- (BOOL)_canShowAvatarView;
- (void)_configureCanvasView;
- (void)_contactPhotosEnabledChangedNotification:(id)a0;
- (void)_dequeueNotificationViews:(id)a0;
- (BOOL)_didReceiveMessageChatItem:(id)a0 addedChatItems:(id)a1;
- (void)_handleChatDisplayNameChange:(id)a0;
- (void)_handleChatItemDidChange:(id)a0;
- (void)_removeAllNotifications;
- (BOOL)_shouldStartnotificationQueue;
- (void)_startNotificationQueue;
- (void)_updateDismissButton;
- (void)_updateTitleLabelText;
- (long long)_viewModeForCalloutView;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)a0;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)a0;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)a0;
- (void)dismissNotifications;
- (id)initWithConversation:(id)a0 plugin:(id)a1;

@end
