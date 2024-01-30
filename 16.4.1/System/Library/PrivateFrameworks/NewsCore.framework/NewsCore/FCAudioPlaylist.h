@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;

+ (id)desiredKeys;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;

- (BOOL)containsArticleID:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)dateAddedForArticleID:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)save;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeArticleID:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)localStoreMigrator;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void).cxx_destruct;

@end
