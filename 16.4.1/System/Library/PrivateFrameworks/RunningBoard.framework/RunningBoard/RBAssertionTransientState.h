@class NSMutableSet, NSMutableDictionary;

@interface RBAssertionTransientState : NSObject <NSCopying> {
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
}

@property (readonly, nonatomic) NSMutableSet *tags;

- (void)unionState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)a0 forRole:(unsigned char)a1;
- (BOOL)isEqual:(id)a0;
- (void)addTag:(id)a0;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;
- (id)description;
- (void).cxx_destruct;

@end
