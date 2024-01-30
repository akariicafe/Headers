@class SCLSettingsSyncStateMachine;

@interface SCLSettingsSyncState : NSObject

@property (readonly, nonatomic) unsigned long long status;
@property (weak, nonatomic) SCLSettingsSyncStateMachine *stateMachine;

- (void)significantUserInteractionOccurred;
- (void).cxx_destruct;
- (void)xpcActivityStarted;
- (id)initWithStateMachine:(id)a0;
- (void)didEnterWithPreviousState:(id)a0;
- (void)willExitWithNextState:(id)a0;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)enqueueFailedWithError:(id)a0;
- (void)didEnqueueMessage:(id)a0;
- (void)message:(id)a0 failedWithError:(id)a1;
- (void)messageDidSend:(id)a0;
- (void)messageWasDelivered:(id)a0;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;

@end
