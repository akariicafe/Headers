@class RBProcess, RBProcessState;

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}

- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
