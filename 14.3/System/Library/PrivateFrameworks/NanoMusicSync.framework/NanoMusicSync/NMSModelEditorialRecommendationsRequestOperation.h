@interface NMSModelEditorialRecommendationsRequestOperation : MPModelStoreBrowseRequestOperation

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void)execute;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;

@end
