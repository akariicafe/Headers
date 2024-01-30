@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (void).cxx_destruct;
- (id)init;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
