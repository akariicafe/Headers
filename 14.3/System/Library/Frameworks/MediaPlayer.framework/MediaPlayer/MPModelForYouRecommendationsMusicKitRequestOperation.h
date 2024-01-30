@class NSDictionary;

@interface MPModelForYouRecommendationsMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSDictionary *_storeBagDictionary;
}

- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (BOOL)isOnboardingRequired:(id)a0;
- (id)_recommendationGroupBuilder;
- (id)_recommendationGroupBuilderWithFlatSectionedItems:(id)a0;
- (id)_produceResultsWithItemsArray:(id)a0;
- (id)_produceResultsWithRecommendationsArray:(id)a0 recentlyPlayedArray:(id)a1;
- (id)_responseWithResults:(id)a0 personalizationResponse:(id)a1;
- (id)recommendationsURLWithStoreBagDictionary:(id)a0;
- (id)_personalizeRecommendationGroup:(id)a0 flatPersonalizedSectionedItems:(id)a1;
- (id)queryItemsWithStoreBagDictionary:(id)a0;
- (id)recentlyPlayedURLWithStoreBagDictionary:(id)a0;
- (id)typesArrayWithTypes:(long long)a0;
- (id)displayFilterKindsValueForOptions:(long long)a0;
- (id)itemProperties;
- (id)sectionProperties;

@end
