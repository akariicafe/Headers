@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

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
+ (id)localStoreFilename;

- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)removeArticleFromReadingList:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allSortedArticleIDsInReadingList;
- (BOOL)shouldHideHeadline:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allNonConsumedArticleIDs;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (BOOL)isArticleOnReadingList:(id)a0;
- (void)addArticleToReadingList:(id)a0;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)dateArticleWasAdded:(id)a0;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;

@end
