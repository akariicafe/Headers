@class NSOrderedSet, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

+ (id)desiredKeys;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordZoneIDs;

- (void)loadLocalCachesFromStore;
- (void)addShortcut:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)containsShortcut:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void).cxx_destruct;

@end
