@class UIColor, CKNotificationAudioViewController, UNNotification, CKNotificationChatController, NSString, IMTimingCollection;

@interface CKNotificationContentViewController : UIViewController <UNNotificationContentExtension>

@property (retain, nonatomic) CKNotificationAudioViewController *audioController;
@property (retain, nonatomic) UNNotification *notification;
@property (retain, nonatomic) CKNotificationChatController *chatController;
@property (retain, nonatomic) IMTimingCollection *launchTokeyboardBringUpTC;
@property (readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaPlayPauseButtonFrame;
@property (readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)connectIfNeeded;

- (void)didReceiveNotification:(id)a0;
- (void)_keyboardDidShow:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_displayNameUpdatedNotification:(id)a0;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)grabFocus;
- (void)mediaPause;
- (void)mediaPlay;
- (void)notificationChatControllerRequestDismissNotificationContentExtension:(id)a0;
- (void)notificationChatControllerSizeUpdated:(id)a0;
- (void)setupAudioAccessoryViewForNotification:(id)a0;
- (void)setupChatControllerForConversation:(id)a0;
- (void)transcriptBackgroundTapped:(id)a0;
- (void)updateContentExtensionSize;
- (void)updateNotificationTitleFromConversation:(id)a0;

@end
