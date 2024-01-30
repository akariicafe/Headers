@class RTInvocationDispatcher, NSMutableDictionary, RTScenarioTriggerManager, NSString, NSObject;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarScenarioTriggerProtocol;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *pendingScenarioInvocations;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (weak, nonatomic) id<RTDaemonClientRegistrarScenarioTriggerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)countOfPendingInvocations;
- (void)encodeWithCoder:(id)a0;
- (void)addPendingScenarioTriggerBlock:(id /* block */)a0 failBlock:(id /* block */)a1 description:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)_logMonitoredScenarioTriggers:(unsigned long long)a0;
- (id)initWithScenarioTriggerManager:(id)a0 queue:(id)a1;
- (BOOL)registered;
- (void)startMonitoringForScenarioTriggerType:(unsigned long long)a0;
- (id)init;
- (void)stopMonitoringForScenarioTriggerType:(unsigned long long)a0;
- (void)onScenarioTriggerManagerNotification:(id)a0;
- (void)_onScenarioTriggerManagerNotification:(id)a0;
- (void).cxx_destruct;
- (BOOL)invocationsPending;

@end
