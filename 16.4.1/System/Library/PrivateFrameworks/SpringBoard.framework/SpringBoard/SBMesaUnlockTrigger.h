@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;

- (void)screenOff;
- (void)screenOn;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)fingerOn;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)significantUserInteractionOccurred;

@end
