@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;

- (void)screenOff;
- (void)screenOn;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)menuButtonUp;
- (void)lockButtonDown;
- (id)succinctDescription;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (id)description;
- (BOOL)bioUnlock;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)fingerOn;
- (void)fingerOff;

@end
