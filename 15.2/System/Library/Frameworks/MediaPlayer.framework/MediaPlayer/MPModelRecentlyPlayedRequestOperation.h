@class NSDictionary;

@interface MPModelRecentlyPlayedRequestOperation : MPStoreModelRequestOperation {
    NSDictionary *_storeBagDictionary;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)_produceResponseWithRecentlyPlayedArray:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)a0;

@end
