@class CACUserAttentionController;

@interface CACUserAttentionInterface : NSObject <CACUserAttentionControllerDelegate>

@property (retain, nonatomic, getter=_userAttentionController, setter=_setUserAttentionController:) CACUserAttentionController *userAttentionController;
@property (nonatomic) BOOL isAttentionAwarenessInterrupted;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)stopUserAttentionControllerIfNeeded;
- (void)startUserAttentionControllerIfNeededForTypes:(unsigned long long)a0;
- (void)userAttentionController:(id)a0 didLoseAttentionWithEvent:(long long)a1;
- (void)userAttentionController:(id)a0 didGainAttentionWithEvent:(long long)a1;
- (void)userAttentionControllerAttentionAwarenessInterrupted:(id)a0;
- (void)userAttentionControllerAttentionAwarenessInterruptionEnded:(id)a0;
- (void)cancelDelayedUserAttentionControllerStop;
- (void)startUserAttentionControllerIfNeeded;
- (void)stopUserAttentionControllerIfNeededAfterDelay:(double)a0;

@end
