@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

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

- (id)dateArticleWasAdded:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)addObserver:(id)a0;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)removeArticleFromReadingList:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)isArticleOnReadingList:(id)a0;
- (id)allSortedArticleIDsInReadingList;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (id)allNonConsumedArticleIDs;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)addArticleToReadingList:(id)a0;
- (BOOL)shouldHideHeadline:(id)a0;
- (void).cxx_destruct;

@end
