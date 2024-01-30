@class SCLSettingsSyncContext, SCLSettingsSyncErrorHandler, SCLSettingsSyncState;
@protocol SCLSettingsSyncStateMachineDelegate;

@interface SCLSettingsSyncStateMachine : NSObject

@property (weak, nonatomic) id<SCLSettingsSyncStateMachineDelegate> delegate;
@property (retain, nonatomic) SCLSettingsSyncContext *context;
@property (readonly, nonatomic) SCLSettingsSyncErrorHandler *errorHandler;
@property (readonly, nonatomic) SCLSettingsSyncState *currentState;
@property (readonly, nonatomic) SCLSettingsSyncState *syncedState;
@property (readonly, nonatomic) SCLSettingsSyncState *pendingSendState;
@property (readonly, nonatomic) SCLSettingsSyncState *sendingState;
@property (readonly, nonatomic) SCLSettingsSyncState *sentState;
@property (readonly, nonatomic) SCLSettingsSyncState *failedState;

- (void)transitionToState:(id)a0;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)significantUserInteractionOccurred;
- (void)activate;
- (void)performSync;
- (void)xpcActivityStarted;
- (void)cancelRetryActivity;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)enqueueFailedWithError:(id)a0;
- (void)didEnqueueMessage:(id)a0;
- (void)message:(id)a0 failedWithError:(id)a1;
- (void)messageDidSend:(id)a0;
- (void)messageWasDelivered:(id)a0;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;
- (void)scheduleCommitTimerWithInterval:(double)a0;
- (void)cancelCommitTimer;
- (void)scheduleRetryWithActivityCriteria:(id)a0;
- (BOOL)_isRelevantMessage:(id)a0;

@end
