@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;

+ (id)desiredKeys;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)commandStoreFileName;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresHighPriorityFirstSync;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (id)localStoreFilename;

- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)save;
- (void)removeArticleID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)containsArticleID:(id)a0;
- (id)localStoreMigrator;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;

@end
