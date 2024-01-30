@protocol AFUISiriTapPanDismissalPolicyManagerDelegate;

@interface AFUISiriTapPanDismissalPolicyManager : NSObject

@property (nonatomic, getter=_shouldDismissForTapsAndPans, setter=_setShouldDismissForTapsAndPans:) BOOL shouldDismissForTapsAndPans;
@property (nonatomic, getter=_idleAndQuiet, setter=_setIdleAndQuiet:) BOOL idleAndQuiet;
@property (nonatomic, getter=_dimmingLayerVisible, setter=_setDimmingLayerVisible:) BOOL dimmingLayerVisible;
@property (nonatomic, getter=_dismissalPolicy, setter=_setDismissalPolicy:) long long dismissalPolicy;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<AFUISiriTapPanDismissalPolicyManagerDelegate> delegate;

- (void)invalidate;
- (void).cxx_destruct;
- (void)_dismissalPolicyForPassThroughAlways:(BOOL)a0 forSessionState:(long long)a1;
- (void)_dismissalPolicyForPassThroughUnlessDimmed:(BOOL)a0 forSessionState:(long long)a1;
- (void)_setShouldDismissForTapsAndPans:(BOOL)a0 shouldDelayDelegateUpdate:(BOOL)a1;
- (void)_updateDelegateOfPolicyChange;
- (void)dimmingLayerVisibilityDidChange:(BOOL)a0 forSessionState:(long long)a1;
- (void)idleAndQuietDidChange:(BOOL)a0 forSessionState:(long long)a1;
- (void)idleAndQuietDidChange:(BOOL)a0 forSessionState:(long long)a1 dimmingLayerVisible:(BOOL)a2;
- (id)initWithPolicy:(long long)a0 delegate:(id)a1;

@end
