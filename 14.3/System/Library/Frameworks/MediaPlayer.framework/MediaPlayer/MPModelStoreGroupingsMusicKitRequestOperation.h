@class NSIndexSet, NSDictionary;

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_whitelistedFCKinds;
    NSDictionary *_storeBagDictionary;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)additionalURLRequestsWithStoreBagDictionary:(id)a0;
- (id)additionalCatalogURLQueryItems;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:(id)a0;
- (id)rootObjectIdentifierWithSubscriptionStatus:(long long)a0;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)catalogURLWithStoreBagDictionary:(id)a0;
- (id)_produceResponseWithParser:(id)a0 results:(id)a1 error:(id *)a2;

@end
