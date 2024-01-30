@class FCBundleSubscriptionManager, NSString, FCFetchedValueObservable;
@protocol NFCopying;

@interface FCBundlePurchaseIDsFetchedValueManager : NSObject <FCBundleSubscriptionChangeObserver, FCFetchedValueManager>

@property (readonly, nonatomic) FCFetchedValueObservable *observable;
@property (readonly, nonatomic) FCBundleSubscriptionManager *bundleSubscriptionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NFCopying> value;

+ (id)_valueWithBundleSubscriptionManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_bundleSubscriptionMayHaveChanged;
- (void)fetchValueWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (void)removeObserver:(id)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithBundleSubscriptionManager:(id)a0;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)bundleSubscriptionDidSubscribe:(id)a0;

@end
