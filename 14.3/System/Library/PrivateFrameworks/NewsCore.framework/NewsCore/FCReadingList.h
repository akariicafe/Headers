@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController

@property (retain, nonatomic) NSMutableDictionary *entriesByArticleID;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (retain, nonatomic) FCMTWriterLock *itemsLock;

+ (id)desiredKeys;
+ (id)backingRecordZoneIDs;
+ (id)localStoreFilename;
+ (BOOL)requiresPushNotificationSupport;
+ (id)commandStoreFileName;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)commandsToMergeLocalDataToCloud:(id)a0;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (BOOL)requiresBatchedSync;

- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)_fetchArticleIDsAvailableForOfflineReadingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)allNonConsumedArticleIDs;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeArticleFromReadingList:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (id)allSortedArticleIDsInReadingList;
- (void)addObserver:(id)a0;
- (BOOL)isArticleOnReadingList:(id)a0;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (id)dateArticleWasAdded:(id)a0;
- (void)_addedArticleIDs:(id)a0 removedArticleIDs:(id)a1 eventInitiationLevel:(long long)a2;
- (BOOL)shouldHideHeadline:(id)a0;
- (void)loadLocalCachesFromStore;
- (id)_allEntriesInReadingList;
- (id)_readingListEntryForArticleID:(id)a0;
- (unsigned long long)_maxCountOfArticlesAvailableOfflineWithConfiguration:(id)a0;
- (id)_allSortedEntriesInReadingList;
- (void)addArticleToReadingList:(id)a0;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;

@end
