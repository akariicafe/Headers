@interface RBMutableProcessState : RBProcessState

- (void)unionState:(id)a0;
- (void)removeAllInheritances;
- (void)setIsBeingDebugged:(BOOL)a0;
- (void)removeAllPreventIdleSleepIdentifiers;
- (void)setExplicitJetsamBand:(unsigned long long)a0;
- (void)setRole:(unsigned char)a0;
- (void)setForceRoleManage:(BOOL)a0;
- (void)setMaxCPUUsageLimits:(id)a0 forRole:(unsigned char)a1;
- (void)setJetsamLenientMode:(BOOL)a0;
- (void)setLegacyFinishTaskReason:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setThrottleBestEffortNetworking:(BOOL)a0;
- (void)setPreventBaseMemoryLimitReduction:(BOOL)a0;
- (void)setMemoryLimitCategory:(id)a0;
- (void)addLegacyAssertion:(id)a0;
- (void)removeInheritance:(id)a0;
- (void)setGuaranteedRunning:(BOOL)a0;
- (void)setMinCPUUsageLimits:(id)a0 forRole:(unsigned char)a1;
- (void)setGPURole:(unsigned char)a0;
- (void)addTag:(id)a0;
- (void)setPreventIdleSleep:(BOOL)a0;
- (void)setMemoryLimitStrength:(unsigned char)a0;
- (void)setMemoryLimit:(int)a0;
- (void)addInheritance:(id)a0;
- (void)setTerminationResistance:(unsigned char)a0;
- (void)removePreventIdleSleepIdentifier:(id)a0;
- (void)setTargetedBySuspendableAssertion:(BOOL)a0;
- (void)setPreventSuspend:(BOOL)a0;
- (void)addPreventIdleSleepIdentifier:(id)a0;
- (void)addRBAssertion:(id)a0;

@end
