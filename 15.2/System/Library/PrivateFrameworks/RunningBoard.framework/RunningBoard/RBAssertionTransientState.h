@class NSMutableSet, NSMutableDictionary;

@interface RBAssertionTransientState : NSObject <NSCopying> {
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
}

@property (readonly, nonatomic) NSMutableSet *tags;

- (void)addTag:(id)a0;
- (void)unionState:(id)a0;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)a0 forRole:(unsigned char)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;

@end
