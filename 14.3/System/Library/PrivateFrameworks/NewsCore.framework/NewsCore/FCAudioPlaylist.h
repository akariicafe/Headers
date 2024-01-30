@class NSOrderedSet, NSMutableDictionary, FCMTWriterLock, NSArray;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType>

@property (retain, nonatomic) NSMutableDictionary *itemsByID;
@property (retain, nonatomic) NSOrderedSet *orderedArticleIDs;
@property (readonly, nonatomic) FCMTWriterLock *itemsLock;
@property (readonly, nonatomic) NSArray *articleIDs;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreMigrator;
+ (BOOL)requiresBatchedSync;

- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)_modifyWithInsertedOrChangedItems:(id)a0 removedArticleIDs:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeArticleID:(id)a0;
- (void)_regenerateOrderedArticleIDs;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)loadLocalCachesFromStore;
- (BOOL)containsArticleID:(id)a0;
- (id)_itemWithArticleID:(id)a0;

@end
