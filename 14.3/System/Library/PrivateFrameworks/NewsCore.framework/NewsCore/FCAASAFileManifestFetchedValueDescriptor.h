@class FCFetchedValueManager;

@interface FCAASAFileManifestFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *purchaseIDsManager;
@property (readonly, nonatomic) FCFetchedValueManager *heldLinksResourceManager;

- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)fastCachedValue;
- (id)_computedValue;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithPurchaseIDsManager:(id)a0 heldLinksResourceManager:(id)a1;
- (id)inputManagers;

@end
