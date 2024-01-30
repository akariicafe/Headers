@class NSIndexSet, ICURLBag;

@interface MPModelStoreGroupingsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet *_allowedFCKinds;
    ICURLBag *_storeURLBag;
}

- (void).cxx_destruct;
- (id)_produceResponseWithParser:(id)a0 results:(id)a1 error:(id *)a2;
- (id)additionalCatalogURLQueryItems;
- (id)additionalURLRequestsWithStoreURLBag:(id)a0;
- (id)catalogURLWithStoreURLBag:(id)a0;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (id)groupingNameBagKey;
- (id)groupingNameWithMusicSubscriptionDictionary:(id)a0;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)rootObjectIdentifierWithSubscriptionStatus:(long long)a0;

@end
