@protocol FCPaidAccessCheckerType;

@interface FCPurchaseAccessChecker : FCAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPaidAccessChecker:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;

@end
