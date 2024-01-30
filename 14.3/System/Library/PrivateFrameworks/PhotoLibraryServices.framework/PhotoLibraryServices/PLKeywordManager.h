@class NSMutableDictionary, PLPhotoLibraryPathManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLKeywordManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_keywordCache;
}

+ (id)_keywordsForAsset:(id)a0;
+ (id)keywordsForAsset:(id)a0;
+ (id)keywordsForAssetWithUUID:(id)a0 managedObjectContext:(id)a1;
+ (id)keywordsForAssets:(id)a0;

- (id)initWithPathManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)setKeyword:(id)a0 forAssets:(id)a1 managedObjectContext:(id)a2;
- (BOOL)setKeywords:(id)a0 forAssetUUID:(id)a1 managedObjectContext:(id)a2;
- (void)_invalidateKeywordCache;
- (void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)a0;
- (id)_inq_keywordObjectsForKeywords:(id)a0 managedObjectContext:(id)a1;
- (BOOL)_setKeywords:(id)a0 forAsset:(id)a1 managedObjectContext:(id)a2;
- (BOOL)_setKeyword:(id)a0 forAssets:(id)a1 managedObjectContext:(id)a2;
- (BOOL)setKeywords:(id)a0 forAsset:(id)a1;

@end
