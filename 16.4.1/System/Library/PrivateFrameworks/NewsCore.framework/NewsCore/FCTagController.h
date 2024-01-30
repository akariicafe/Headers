@class FCThreadSafeMutableDictionary, NSString, FCTagRecordSource, NSMutableDictionary, FCOperationThrottler, FCCKContentDatabase, FCAssetManager;
@protocol FCCoreConfigurationManager;

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate, FCCoreConfigurationObserving, FCOperationThrottlerDelegate, FCJSONEncodableObjectProviding> {
    FCCKContentDatabase *_contentDatabase;
    FCAssetManager *_assetManager;
    FCTagRecordSource *_tagRecordSource;
    id<FCCoreConfigurationManager> _configurationManager;
    FCThreadSafeMutableDictionary *_fastCache;
    FCOperationThrottler *_tagPrefetchThrottler;
    NSMutableDictionary *_prefetchedTags;
}

@property (nonatomic) BOOL shouldPrefetchGlobalTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTagAllowedInContentStoreFront:(id)a0;
+ (BOOL)isTagAllowed:(id)a0;

- (id)jsonEncodableObject;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (id)fetchOperationForTagsWithIDs:(id)a0;
- (id)slowCachedTagForID:(id)a0;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)tagsFetchOperation:(id)a0 didFetchTags:(id)a1;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeParents:(BOOL)a1;
- (id)tagsForTagRecords:(id)a0;
- (id)fastCachedTagForID:(id)a0;
- (id)fetchOperationForTagsIncludingChildrenWithIDs:(id)a0 softMaxAge:(double)a1;
- (void)fetchTagsForTagIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (id)tagsForTagIDs:(id)a0 predicate:(id /* block */)a1;
- (void)dealloc;
- (id)channelsForTagRecords:(id)a0;
- (void)fetchTagForTagID:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)slowCachedTagsForIDs:(id)a0;
- (id)tagsForTagIDs:(id)a0;
- (id)init;
- (id)fetchOperationForTagsWithIDs:(id)a0 includeChildren:(BOOL)a1;
- (id)initWithContentDatabase:(id)a0 assetManager:(id)a1 tagRecordSource:(id)a2 configurationManager:(id)a3;
- (void)fetchTagsForTagIDs:(id)a0 includeParents:(BOOL)a1 includeChildren:(BOOL)a2 qualityOfService:(long long)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)fastCachedTagsForIDs:(id)a0;
- (id)expectedFastCachedTagForID:(id)a0;
- (void)saveTagsToCache:(id)a0;
- (void).cxx_destruct;
- (void)fetchTagsForTagIDs:(id)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchTagsForTagIDs:(id)a0 maximumCachedAge:(double)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;

@end
