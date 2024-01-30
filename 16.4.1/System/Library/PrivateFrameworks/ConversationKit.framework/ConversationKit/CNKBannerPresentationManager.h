@class NSString, NSUUID, CNKConversationControlsManager, TUCall;

@interface CNKBannerPresentationManager : NSObject <ConversationKit.SystemBannerHostViewControllerDelegate, TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ inCallConversationControlsDelegate;
    void /* unknown type, empty encoding */ _conversationControlsManager;
    void /* unknown type, empty encoding */ presentedSystemApertureElement;
    void /* unknown type, empty encoding */ presentedBannerDismissalTimer;
    void /* unknown type, empty encoding */ systemApertureElementDismissalTimer;
    void /* unknown type, empty encoding */ placeholderCallCenter;
    void /* unknown type, empty encoding */ shouldRequestHUDPresentationOnAVUpgradeOrDowngrade;
    void /* unknown type, empty encoding */ previouslyHadMultipleCalls;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ features;
}

@property (nonatomic, readonly) NSString *inCallSceneSessionIdentifier;
@property (nonatomic, readonly) unsigned long long statusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) BOOL hasPresentedFullScreenCallUI;
@property (nonatomic, readonly) BOOL isPresentingFullScreenCallUI;
@property (nonatomic, readonly) BOOL isSpringBoardLocked;
@property (nonatomic, readonly) BOOL hasAssociatedCall;
@property (nonatomic, readonly) TUCall *activeCall;
@property (nonatomic, readonly) BOOL onlyHasPlaceholderCall;
@property (nonatomic, readonly) BOOL wantsBannerWithoutScene;
@property (nonatomic, readonly) NSUUID *placeholderCallGroupUUID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentationDelegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ audioRoutingDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ handedOffCall;
@property (nonatomic, readonly) CNKConversationControlsManager *conversationControlsManager;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedBanner;
@property (nonatomic, readonly) BOOL isSystemHUDManagedBySpringBoard;
@property (nonatomic, readonly) BOOL inCallControlsVisible;

- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1 fromOldConversation:(id)a2;
- (void)bannerDismissedBySpringBoard;
- (void)deepLinkToFullScreenCallDetailsView;
- (void)deepLinkToFullScreenCallUI;
- (void)didDismiss:(id)a0;
- (void)dismissPresentedBannerFor:(id)a0 animated:(BOOL)a1;
- (void)handleAppLaunchWantsHUDDismissal:(id)a0;
- (void)handleCallStatusDidChange:(id)a0;
- (void)handleLockScreenStatusChanged;
- (void)invalidatePersistentSystemApertureAlertWithReason:(id)a0;
- (void)preloadCallChanges;
- (void)presentHUDForCurrentContext;
- (void)presentReminderNotice;
- (void)presentSystemHUD;
- (void)showHandoffHUD;
- (void)showInCallHUD;
- (void)showPTTHUD;
- (void)showRemoteParticipantNoticeIfNeeded;
- (void)updateSceneStateObservers;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeSystemApertureElementProvider;

@end
