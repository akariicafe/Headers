@class CKDMMCSEngineContext, NSString, CKDClientContext, CKDAssetCache;

@interface CKDMMCS : NSObject

@property (nonatomic) BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CKDAssetCache *assetCache;
@property (weak, nonatomic) CKDClientContext *clientContext;
@property (readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;

+ (id)protocolVersion;
+ (id)MMCSWrapperForApplicationBundleID:(id)a0 assetDirectoryContext:(id)a1 isUTAccount:(BOOL)a2 error:(id *)a3;
+ (id)protocolHeaders;
+ (id)zeroSizeFileSignature;
+ (id)sharedWrappersByPath;
+ (long long)_commonErrorCodeWithMMCSError:(id)a0;
+ (long long)_errorCodeWithMMCSPutError:(id)a0;
+ (long long)_errorCodeWithMMCSGetError:(id)a0;
+ (long long)_errorCodeWithMMCSRegisterError:(id)a0;
+ (id)_userInfoFromMMCSRetryableError:(id)a0;
+ (id)_errorWithMMCSError:(id)a0 path:(id)a1 description:(id)a2 operationType:(long long)a3;
+ (void)purgeMMCSDirectoryWithPath:(id)a0;
+ (id)_errorWithMMCSError:(id)a0 description:(id)a1 operationType:(long long)a2;
+ (id)sharedMMCSItemReaders;
+ (id)sharedItemIDs;
+ (void)startTrackingMMCSItemReader:(id)a0;
+ (void)stopTrackingMMCSItemReader:(id)a0;
+ (void)startTrackingItemIDsForMMCSItems:(id)a0;
+ (void)stopTrackingItemIDsForMMCSItems:(id)a0;
+ (BOOL)isTrackingItemID:(unsigned long long)a0;

- (void)drop;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)getItemGroupSet:(id)a0 operation:(id)a1 shouldFetchAssetContentInMemory:(BOOL)a2 options:(id)a3 progress:(id /* block */)a4 command:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)registerItemGroupSet:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)getChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)putSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)putItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)putChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithMMCSEngineContext:(id)a0 path:(id)a1;
- (id)_referenceIdentifierFromAssetKey:(id)a0;
- (struct _mmcs_engine { } *)getMMCSEngine;
- (id)_contextToRegisterItemGroup:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_logMMCSOptions:(id)a0;
- (id)_contextToGetOrPutChunkKeysItemGroup:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_contextToGetItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)_contextToPutItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)performOnRunLoop:(id /* block */)a0;
- (BOOL)registeredItemCount:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)_getRegisteredItemsGreaterThan:(unsigned long long)a0 itemIds:(unsigned long long *)a1 itemCount:(unsigned long long *)a2 error:(id *)a3;
- (void)_unregisterItemIDs:(id)a0;
- (id)_contextToPutSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_contextToGetSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)showRegisteredItems;
- (void)unregisterItemIDs:(id)a0;
- (void)unregisterItemIDs:(id)a0 completionBlock:(id /* block */)a1;

@end
