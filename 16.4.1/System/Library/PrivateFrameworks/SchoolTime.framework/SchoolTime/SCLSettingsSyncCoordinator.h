@class NSString, NSURL, SCLScheduleSettings, NSObject, SCLSettingsSyncStateMachine;
@protocol OS_dispatch_source, SCLSettingsSyncTransport, OS_dispatch_queue;

@interface SCLSettingsSyncCoordinator : NSObject <SCLSettingsSyncStateMachineDelegate>

@property (readonly, nonatomic) SCLSettingsSyncStateMachine *stateMachine;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (readonly, nonatomic) NSURL *contextURL;
@property (readonly, nonatomic) NSString *xpcActivityName;
@property (readonly, nonatomic) SCLScheduleSettings *schedule;
@property (weak, nonatomic) id<SCLSettingsSyncTransport> transport;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginActivity:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)applySchedule:(id)a0;
- (void)cancelCommitTimerForStateMachine:(id)a0;
- (void)cancelRetryActivityForStateMachine:(id)a0;
- (void)commitTimerFired;
- (void)didDeliverMessageWithIdentifier:(id)a0;
- (void)identifier:(id)a0 didSendWithSuccess:(BOOL)a1 error:(id)a2;
- (id)initWithFileURL:(id)a0 pairingID:(id)a1 schedule:(id)a2 queue:(id)a3;
- (void)noteSignificantUserInteractionOccured;
- (void)performSyncForStateMachine:(id)a0;
- (void)registerActivityWithCriteria:(id)a0;
- (void)stateMachine:(id)a0 didTransitionFromState:(id)a1 toState:(id)a2;
- (void)stateMachine:(id)a0 scheduleCommitTimerWithInterval:(double)a1;
- (void)stateMachine:(id)a0 scheduleRetryWithActivityCriteria:(id)a1;

@end
