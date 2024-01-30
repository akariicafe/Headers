@class SBAppSwitcherSettings, NSString, SBAttentionAwarenessClient, NSMutableSet, SBWindowScene, SBFHomeGrabberSettings;
@protocol SBAffordancePresenceControllerDelegate;

@interface SBAffordancePresenceController : NSObject <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToUnhideParticipant> {
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    long long _presence;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    BOOL _edgeProtectEnabled;
    BOOL _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBWindowScene *_windowScene;
}

@property (weak, nonatomic) id<SBAffordancePresenceControllerDelegate> delegate;
@property (nonatomic) BOOL autoHideAffordance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)dealloc;
- (long long)_calculatePresence;
- (void)clientDidResetForUserAttention:(id)a0;
- (void)_updateIdleTouchAwarenessClient;
- (void).cxx_destruct;
- (void)_updatePresence;
- (long long)currentPresence;
- (id)_animationSettingsForTransitionFromPresence:(long long)a0 toPresence:(long long)a1;
- (void)_unhideIfAutoHidden;
- (void)_updatePresence:(long long)a0 withAnimationSettings:(id)a1;
- (id)initWithDelegate:(id)a0 windowScene:(id)a1;
- (void)setHidden:(BOOL)a0 forReason:(id)a1 animated:(BOOL)a2;
- (void)transientUI:(id)a0 wasIndirectPannedToDismissFromGestureRecognizer:(id)a1;
- (void)transientUI:(id)a0 wasTappedToUnhideFromGestureRecognizer:(id)a1;
- (BOOL)transientUIHandledTouch:(id)a0 withSystemGestureRecognizer:(id)a1;

@end
