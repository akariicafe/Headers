@class RBProcess, RBProcessState;

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}

- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (void).cxx_destruct;

@end
