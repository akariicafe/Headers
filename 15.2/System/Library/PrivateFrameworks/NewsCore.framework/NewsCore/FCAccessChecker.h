@interface FCAccessChecker : NSObject

- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (id)init;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;

@end
