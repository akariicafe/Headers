@class NSUUID, CNKForegroundApp;

@interface CNKConversationControlsManager : NSObject {
    void /* unknown type, empty encoding */ call;
    void /* unknown type, empty encoding */ initiallyActiveParticipantIdentifiers;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ noticeCoordinator;
    void /* unknown type, empty encoding */ activeNoticeCancellable;
    void /* unknown type, empty encoding */ countdownController;
    void /* unknown type, empty encoding */ systemConversationControlsDelegate;
    void /* unknown type, empty encoding */ systemDetailsViewControllerDelegate;
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ inCallDetailsViewControllerDelegate;
    void /* unknown type, empty encoding */ audioRoutingDelegate;
    void /* unknown type, empty encoding */ approvalDelegate;
    void /* unknown type, empty encoding */ _shouldOpenMessages;
    void /* unknown type, empty encoding */ _audioRoute;
    void /* unknown type, empty encoding */ _bluetoothAudioFormat;
    void /* unknown type, empty encoding */ _localAudioEnabled;
    void /* unknown type, empty encoding */ _localVideoButtonState;
    void /* unknown type, empty encoding */ _shareMenuButtonState;
    void /* unknown type, empty encoding */ _foregroundApp;
    void /* unknown type, empty encoding */ _ephemeralAlert;
    void /* unknown type, empty encoding */ shouldShowDelayedLMIBanner;
    void /* unknown type, empty encoding */ _appLaunchButtonType;
    void /* unknown type, empty encoding */ screenShareCountdownTimer;
}

@property (nonatomic, readonly) NSUUID *callUUID;
@property (nonatomic, retain) CNKForegroundApp *foregroundApp;
@property (nonatomic) void /* unknown type, empty encoding */ applicationState;

- (void)toggleVideoButtonTappedWithButton:(id)a0;
- (void)openMessagesButtonTapped;
- (void)leaveButtonTappedWithButton:(id)a0;
- (void)joinButtonTappedWithButton:(id)a0;
- (void)toggleMicButtonTappedWithButton:(id)a0;
- (void)showInCallHUD;
- (void)accessibilityDidAddPendingParticipant:(id)a0;
- (void).cxx_destruct;
- (id)initWithActiveCall:(id)a0;
- (id)init;
- (void)dealloc;

@end
