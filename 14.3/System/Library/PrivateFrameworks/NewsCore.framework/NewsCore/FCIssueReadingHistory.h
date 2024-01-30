@class NSString, NSMutableDictionary, FCMTWriterLock, NSArray;

@interface FCIssueReadingHistory : FCPrivateDataController <FCIssueReadingHistoryType, FCClearableReadingHistory>

@property (retain, nonatomic) NSMutableDictionary *itemsByID;
@property (readonly, nonatomic) FCMTWriterLock *itemsLock;
@property (readonly, nonatomic) NSString *mostRecentlyVisitedIssueID;
@property (readonly, nonatomic) NSArray *recentlyVisitedIssueIDs;
@property (readonly, nonatomic) NSArray *recentlyEngagedIssueIDs;
@property (readonly, nonatomic) NSArray *allEngagedIssueIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
+ (BOOL)requiresBatchedSync;

- (void)clearHistory;
- (void)_modifyHistoryForIssueID:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void).cxx_destruct;
- (BOOL)hasIssueWithIDBeenBadged:(id)a0;
- (void)removeObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (id)_historyItemForIssueID:(id)a0;
- (BOOL)hasIssueWithIDBeenVisited:(id)a0;
- (id)bookmarkForLastVisitToIssueWithID:(id)a0;
- (void)_didChangeForIssueIDs:(id)a0;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)a0;
- (void)markIssueAsEngagedWithID:(id)a0;
- (void)_addHistoryItems:(id)a0;
- (BOOL)hasIssueWithIDBeenSeen:(id)a0;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)a0;
- (id)_historyItemForID:(id)a0;
- (void)loadLocalCachesFromStore;
- (BOOL)hasIssueWithIDBeenEngaged:(id)a0;
- (id)lastSeenDateForIssueWithID:(id)a0;
- (id)_allHistoryItems;
- (id)lastVisitedDateForIssueWithID:(id)a0;
- (id)lastEngagedDateForIssueWithID:(id)a0;
- (void)markIssueAsSeenWithID:(id)a0;
- (void)markIssueAsBadgedWithID:(id)a0;
- (void)markIssueWithID:(id)a0 asVisitedWithBookmark:(id)a1;

@end
