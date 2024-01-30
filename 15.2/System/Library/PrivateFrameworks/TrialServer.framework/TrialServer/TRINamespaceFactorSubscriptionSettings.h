@class TRIKVStore;

@interface TRINamespaceFactorSubscriptionSettings : NSObject

@property (retain, nonatomic) TRIKVStore *keyValueStore;

+ (id)settingsWithKeyValueStore:(id)a0;
+ (id)keyForNamespaceSubscription:(id)a0;

- (id)subscribedFactorsForNamespaceName:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyValueStore:(id)a0;
- (BOOL)setSubscriptionWithFactorNames:(id)a0 inNamespaceName:(id)a1 error:(id *)a2;

@end
