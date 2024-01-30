@class HDSPEnvironmentNotReadyState, NSString, HDSPEnvironmentReadyState, HDSPEnvironmentDemoState, HDSPEnvironmentMigrationState;
@protocol HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, NAScheduler;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPEnvironmentStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPEnvironmentStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPEnvironmentNotReadyState *notReadyState;
@property (readonly, nonatomic) HDSPEnvironmentMigrationState *migrationState;
@property (readonly, nonatomic) HDSPEnvironmentReadyState *readyState;
@property (readonly, nonatomic) HDSPEnvironmentDemoState *demoState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateMachineLog;
- (BOOL)needsDataMigration;
- (void)environmentDidBecomeReady;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 infoProvider:(id)a1;
- (BOOL)isSystemReady;
- (void)systemDidBecomeReady;
- (void)dataMigrationDidComplete;
- (void)environmentShouldMigrateData;

@end
