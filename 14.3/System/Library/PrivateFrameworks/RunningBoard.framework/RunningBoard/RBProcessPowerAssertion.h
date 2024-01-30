@class RBProcess, RBProcessState;

@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcessState *_state;
    RBProcess *_process;
}

- (void).cxx_destruct;
- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;

@end
