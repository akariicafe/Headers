@class SCLSettingsSyncStateMachine;

@interface SCLSettingsSyncState : NSObject

@property (readonly, nonatomic) unsigned long long status;
@property (weak, nonatomic) SCLSettingsSyncStateMachine *stateMachine;

- (void)xpcActivityStarted;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)a0;
- (id)initWithStateMachine:(id)a0;
- (void)willExitWithNextState:(id)a0;
- (void)significantUserInteractionOccurred;
- (void)settingsDidChange;
- (void)messageDidSend:(id)a0;
- (void)commitSettings;
- (void)didEnqueueMessage:(id)a0;
- (void)enqueueFailedWithError:(id)a0;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;
- (void)message:(id)a0 failedWithError:(id)a1;
- (void)messageWasDelivered:(id)a0;

@end
