@class NSMutableDictionary;

@interface RTRoutineManagerRegistrantScenarioTrigger : RTRoutineManagerRegistrant

@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (readonly, copy, nonatomic) NSMutableDictionary *scenarioTriggerHandlers;
@property (readonly, nonatomic) BOOL registered;

- (id)init;
- (void)onScenarioTriggers:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)a0;
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)a0 handler:(id /* block */)a1;

@end
