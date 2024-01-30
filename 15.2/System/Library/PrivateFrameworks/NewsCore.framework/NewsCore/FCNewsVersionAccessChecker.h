@interface FCNewsVersionAccessChecker : FCAccessChecker

- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (id)init;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
