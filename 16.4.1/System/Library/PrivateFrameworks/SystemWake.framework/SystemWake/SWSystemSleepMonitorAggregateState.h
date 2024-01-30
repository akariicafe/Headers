@interface SWSystemSleepMonitorAggregateState : NSObject {
    unsigned long long _stateTimestamp;
    unsigned long long _phaseTimestamp;
    unsigned long long _state;
    unsigned long long _phase;
}

@property (readonly) unsigned long long sleepMonitorState;
@property (readonly) unsigned long long sleepMonitorStateTimestamp;
@property (readonly) unsigned long long powerManagementPhase;
@property (readonly) unsigned long long powerManagementPhaseTimestamp;

- (id)description;
- (id)initWithSleepMonitorState:(unsigned long long)a0 stateTimestamp:(unsigned long long)a1 powerManagementPhase:(unsigned long long)a2 phaseTimestamp:(unsigned long long)a3;

@end
