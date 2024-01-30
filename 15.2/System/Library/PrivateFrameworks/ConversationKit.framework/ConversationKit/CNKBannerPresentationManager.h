@class CNKConversationControlsManager, TUCall;

@interface CNKBannerPresentationManager : NSObject <ConversationKit.SystemBannerHostViewControllerDelegate, TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ _conversationControlsManager;
    void /* unknown type, empty encoding */ presentedBannerDismissalTimer;
}

@property (nonatomic, readonly) TUCall *activeCall;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ audioRoutingDelegate;
@property (nonatomic, readonly) CNKConversationControlsManager *conversationControlsManager;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedBanner;
@property (nonatomic, readonly) BOOL inCallControlsVisible;

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)didDismiss:(id)a0;
- (void)showInCallHUD;
- (void)dismissPresentedBannerFor:(id)a0 animated:(BOOL)a1;
- (void)handleCallStatusDidChange:(id)a0;
- (void)presentSystemHUD;
- (void)presentReminderNotice;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
