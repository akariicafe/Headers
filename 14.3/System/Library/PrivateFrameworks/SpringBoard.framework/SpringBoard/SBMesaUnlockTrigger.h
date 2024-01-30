@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;

- (void)screenOff;
- (void)menuButtonUp;
- (void).cxx_destruct;
- (void)lockButtonDown;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)bioUnlock;
- (void)fingerOn;
- (void)fingerOff;

@end
