@interface VUIMediaAPIRequestFactory : NSObject

+ (void)_addTypeFilterToURL:(id *)a0 forRequest:(id)a1;
+ (id)_URLAddAdditionalParameter:(id)a0;
+ (id)_URLParameterFilterWithShowIdentifier:(id)a0;
+ (id)_URLParameterForAdditionalParameters;
+ (id)_URLParameterForExtend:(id)a0;
+ (id)_URLParameterForInclude:(id)a0;
+ (id)_URLParameterForIncludeType:(id)a0 includeRelationship:(id)a1;
+ (id)_URLParameterForLimit:(id)a0;
+ (id)_URLParameterForSort:(id)a0;
+ (id)_URLParameterTypeFilterWithTypes:(id)a0;
+ (id)_URLParameterWithGenreFilter:(id)a0;
+ (id)_URLParameterWithGenreIDsFilter:(id)a0;
+ (id)_URLParameterWithOwnerIdentifier:(id)a0;
+ (id)_URLParameterWithSharedPurchases;
+ (id)_URLRequestWithURLString:(id)a0;
+ (id)_purchasesEpisodesEndpoint;
+ (id)episodesRequestWithShowIdentifier:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)familyMembersRequest;
+ (id)genresRequestForVUIFamilySharingGenre:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)genresRequestForVUIFamilySharingGenreIDsFilter:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)genresRequestWithOwnerIdentifier:(id)a0;
+ (id)moviesPurchasesRequestWithOwnerIdentifier:(id)a0;
+ (id)recentPurchasesRequestWithOwnerIdentifier:(id)a0;
+ (id)seasonsRequestWithShowIdentifier:(id)a0 withOwnerIdentifier:(id)a1;
+ (id)showsPurchasesRequestWithOwnerIdentifier:(id)a0;

@end
