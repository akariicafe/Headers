@class RBInheritanceCollection, NSSet, RBSProcessIdentity, NSMutableSet, NSMutableDictionary;

@interface RBProcessState : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    unsigned char _flags;
}

@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) BOOL preventSuspend;
@property (readonly, nonatomic) BOOL GPUAllowed;
@property (readonly, nonatomic) unsigned char terminationResistance;
@property (readonly, nonatomic) unsigned char jetsamBand;
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL jetsamLenientMode;
@property (readonly, nonatomic) BOOL throttleBestEffortNetworking;
@property (readonly, nonatomic) BOOL effectiveJetsamLenientMode;
@property (readonly, nonatomic) BOOL forceRoleManage;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUDuration;
@property (readonly, nonatomic) unsigned long long effectiveMaxCPUUsageViolationPolicy;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUPercentage;
@property (readonly, nonatomic) unsigned long long effectiveMinCPUDuration;
@property (readonly, nonatomic) unsigned long long legacyFinishTaskReason;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, nonatomic) NSSet *preventLaunchReasons;
@property (readonly, copy, nonatomic) NSSet *tags;
@property (readonly, copy, nonatomic) NSSet *legacyAssertions;
@property (readonly, copy, nonatomic) NSSet *primitiveAssertions;

- (id)inheritancesForEnvironment:(id)a0;
- (id)init;
- (BOOL)isEqualToProcessStateIgnoringIdentity:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAppNapEqualToProcessState:(id)a0;
- (id)clientStateForProcess:(id)a0;
- (id)maxCPUUsageLimitsForRole:(unsigned char)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)minCPUUsageLimitsForRole:(unsigned char)a0;
- (id)initWithIdentity:(id)a0;
- (id)debugDescription;
- (BOOL)isEqualToProcessStateIgnoringInheritances:(id)a0;

@end
