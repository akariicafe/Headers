@interface FCBlockedExplicitContentAccessChecker : FCAccessChecker

- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (id)init;

@end
