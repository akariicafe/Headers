@interface NMSModelEditorialRecommendationsRequestOperation : MPModelStoreBrowseRequestOperation

- (void)execute;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)a0 error:(id *)a1;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;

@end
