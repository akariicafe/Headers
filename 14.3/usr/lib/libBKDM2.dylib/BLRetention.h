@interface BLRetention : NSObject

+ (void)initialize;
+ (void)removeItemAtPath:(id)a0;
+ (void)setPurgeableAtPath:(id)a0 directory:(BOOL)a1;
+ (void)applyPolicyWithPath:(id)a0 sizeLimit:(unsigned long long)a1 freeSpaceLimit:(unsigned long long)a2;
+ (void)applyCustomerPolicyWithPath:(id)a0;
+ (void)setRetentionType:(id)a0 atPath:(id)a1;
+ (void)limitSequenceDirs:(id)a0 withSize:(unsigned long long *)a1 toCount:(unsigned long long)a2 keepNewest:(BOOL)a3 removalMethod:(id /* block */)a4;
+ (unsigned long long)stripSequenceAtPath:(id)a0;
+ (void)limitSequenceDirs:(id)a0 withSize:(unsigned long long *)a1 toCount:(unsigned long long)a2 withReplaceInterval:(double)a3 removalMethod:(id /* block */)a4;
+ (void)applyPolicyWithPath:(id)a0 sizeLimit:(unsigned long long)a1 freeMissingSpace:(unsigned long long)a2;
+ (id)retentionPolicyTypes;
+ (void)limitSequenceDirs:(id)a0 withSize:(unsigned long long *)a1 removalMethod:(id /* block */)a2;
+ (void)limitSequenceDirs:(id)a0 withSize:(unsigned long long *)a1;
+ (void)applyCustomerPolicyForType:(id)a0 withSequenceDirs:(id)a1 withSize:(unsigned long long *)a2;
+ (void)applyPolicyForType:(id)a0 withSequenceDirs:(id)a1 withSize:(unsigned long long *)a2;

@end
