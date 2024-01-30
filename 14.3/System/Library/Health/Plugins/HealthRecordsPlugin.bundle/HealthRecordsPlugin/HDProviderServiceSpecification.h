@class NSURLSessionConfiguration;

@interface HDProviderServiceSpecification : NSObject

@property (class, readonly, copy, nonatomic) NSURLSessionConfiguration *defaultSessionConfiguration;
@property (class, readonly, nonatomic) long long currentServiceEnvironment;

+ (void)initialize;
+ (id)URLForProvidersWithBatchID:(id)a0 searchSessionID:(id)a1 error:(id *)a2;
+ (id)URLForFeaturedBrandLogosAtScaleKey:(id)a0 error:(id *)a1;
+ (id)_resultsArrayFromJSONObject:(id)a0 error:(id *)a1;
+ (id)_baseSearchURL;
+ (id)_baseURLForEnvironment:(long long)a0 useSearchHost:(BOOL)a1;
+ (id)_providerDictionaryFromJSONObject:(id)a0 matchingExternalID:(id)a1 error:(id *)a2;
+ (id)gatewaysFromFetchedJSONObject:(id)a0 matchingExternalIDs:(id)a1 error:(id *)a2;
+ (id)languageAndRegionQueryParameter;
+ (id)_searchResultsFromFetchedJSONObject:(id)a0 error:(id *)a1;
+ (id)gatewayFromFetchedJSONObject:(id)a0 matchingExternalID:(id)a1 error:(id *)a2;
+ (id)searchResultsPageFromFetchedJSONObject:(id)a0 error:(id *)a1;
+ (id)_URLForListOfType:(long long)a0 batchID:(id)a1 searchSessionID:(id)a2 error:(id *)a3;
+ (id)_encodedBrandLogosFromFetchedJSONObject:(id)a0 error:(id *)a1;
+ (id)URLForBrandLogosWithBatchID:(id)a0 scaleKey:(id)a1 error:(id *)a2;
+ (BOOL)addAuthorizationHeadersToRequest:(id)a0 error:(id *)a1;
+ (void)providerAndGatewaysFromFetchedJSONObject:(id)a0 matchingProviderExternalID:(id)a1 completion:(id /* block */)a2;
+ (id)_gatewaysFromProviderDictionary:(id)a0 error:(id *)a1;
+ (id)URLForGatewaysWithBatchID:(id)a0 error:(id *)a1;
+ (id)_resultsDictionaryFromJSONObject:(id)a0 error:(id *)a1;
+ (id)brandLogosFromFetchedJSONObject:(id)a0 error:(id *)a1;
+ (id)_hostForEnvironment:(long long)a0;
+ (id)_dictionaryFromJSONObject:(id)a0 error:(id *)a1;
+ (id)_searchHostForEnvironment:(long long)a0;
+ (id)_baseURL;
+ (id)URLForSearchQuery:(id)a0 supportedCountryCodes:(id)a1 searchSessionID:(id)a2 latitude:(id)a3 longitude:(id)a4 from:(long long)a5 error:(id *)a6;

@end
