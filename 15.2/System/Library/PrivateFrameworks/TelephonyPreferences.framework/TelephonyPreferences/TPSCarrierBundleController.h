@interface TPSCarrierBundleController : TPSTelephonyController

- (void)carrierBundleChange:(id)a0;
- (void)operatorBundleChange:(id)a0;
- (id)localizedCarrierNameForSubscriptionContext:(id)a0;
- (id)objectForKey:(id)a0 subscriptionContext:(id)a1;
- (id)localizedStringForKey:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (id)objectForKey:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (id)localizedStringForKey:(id)a0 subscriptionContext:(id)a1;

@end
