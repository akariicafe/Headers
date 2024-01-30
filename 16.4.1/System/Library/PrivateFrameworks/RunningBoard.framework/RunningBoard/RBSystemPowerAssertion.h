@class RBSystemState;

@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState *_state;
}

- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (id)init;
- (void).cxx_destruct;

@end
