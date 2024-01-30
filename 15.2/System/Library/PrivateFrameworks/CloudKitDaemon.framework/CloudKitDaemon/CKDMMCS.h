@class CKDMMCSEngineContext, NSString, NSHashTable, CKDAssetCache;

@interface CKDMMCS : NSObject

@property (nonatomic) BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CKDAssetCache *assetCache;
@property (retain, nonatomic) NSHashTable *containers;
@property (readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;

+ (void)startTrackingItemIDsForMMCSItems:(id)a0;
+ (id)protocolVersion;
+ (BOOL)isTrackingItemID:(unsigned long long)a0;
+ (long long)_commonErrorCodeWithMMCSError:(id)a0;
+ (long long)_errorCodeWithMMCSPutError:(id)a0;
+ (void)startTrackingMMCSItemReader:(id)a0;
+ (id)protocolHeaders;
+ (long long)_errorCodeWithMMCSRegisterError:(id)a0;
+ (id)MMCSWrapperForApplicationBundleID:(id)a0 directoryContext:(id)a1 error:(id *)a2;
+ (id)zeroSizeFileSignature;
+ (id)_errorWithMMCSError:(id)a0 description:(id)a1 operationType:(long long)a2;
+ (id)sharedMMCSItemReaders;
+ (void)stopTrackingMMCSItemReader:(id)a0;
+ (id)_userInfoFromMMCSRetryableError:(id)a0;
+ (void)purgeMMCSDirectoryWithPath:(id)a0;
+ (long long)_errorCodeWithMMCSGetError:(id)a0;
+ (id)sharedItemIDs;
+ (id)sharedWrappersByPath;
+ (void)stopTrackingItemIDsForMMCSItems:(id)a0;
+ (id)_errorWithMMCSError:(id)a0 path:(id)a1 description:(id)a2 operationType:(long long)a3;

- (id)runLoop;
- (void)drop;
- (id)CKStatusReportArray;
- (id)_contextToRegisterItemGroup:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_contextToGetOrPutChunkKeysItemGroup:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)getSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)getChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_referenceIdentifierFromAssetKey:(id)a0;
- (void)_logMMCSOptions:(id)a0;
- (BOOL)registeredItemCount:(unsigned long long *)a0 error:(id *)a1;
- (id)putChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)registerItemGroupSet:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_contextToGetSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (BOOL)_getRegisteredItemsGreaterThan:(unsigned long long)a0 itemIds:(unsigned long long *)a1 itemCount:(unsigned long long *)a2 error:(id *)a3;
- (void)showRegisteredItems;
- (void).cxx_destruct;
- (id)_contextToPutItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)performOnRunLoop:(id /* block */)a0;
- (id)getItemGroupSet:(id)a0 operation:(id)a1 shouldFetchAssetContentInMemory:(BOOL)a2 options:(id)a3 progress:(id /* block */)a4 command:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)_contextToGetItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)putSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_contextToPutSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_unregisterItemIDs:(id)a0;
- (id)putItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (id)initWithMMCSEngineContext:(id)a0 path:(id)a1;
- (void)unregisterItemIDs:(id)a0;
- (void)unregisterItemIDs:(id)a0 completionBlock:(id /* block */)a1;
- (struct _mmcs_engine { } *)getMMCSEngine;

@end
