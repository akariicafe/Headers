@class NSCache, NSString, FCTagRecordSource, NSMutableDictionary, FCOperationThrottler, FCCKContentDatabase, FCAssetManager;
@protocol FCCoreConfigurationManager;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding> {
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    id<FCCoreConfigurationManager> _configurationManager;
    NSCache *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}

@property (nonatomic) BOOL shouldPrefetchGlobalTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTagAllowed:(id)a0;
+ (BOOL)isTagAllowedInContentStoreFront:(id)a0;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)fetchOperationForTagsWithIDs:(id)a0;
- (id)slowCachedTagForID:(id)a0;
- (id)tagsForTagIDs:(id)a0 predicate:(id /* block */)a1;
- (id)fastCachedTagsForIDs:(id)a0;
- (id)fastCachedTagForID:(id)a0;
- (id)fetchOperationForTagsIncludingChildrenWithIDs:(id)a0 softMaxAge:(double)a1;
- (void)tagsFetchOperation:(id)a0 didFetchTags:(id)a1;
- (void)saveTagsToCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchTagForTagID:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)jsonEncodableObject;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeChildren:(BOOL)a1;
- (void)fetchTagsForTagIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchTagsForTagIDs:(id)a0 maximumCachedAge:(double)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (id)expectedFastCachedTagForID:(id)a0;
- (void)fetchTagsForTagIDs:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithContentDatabase:(id)a0 assetManager:(id)a1 tagRecordSource:(id)a2 configurationManager:(id)a3;
- (id)tagsForTagIDs:(id)a0;
- (id)slowCachedTagsForIDs:(id)a0;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeParents:(BOOL)a1;

@end
