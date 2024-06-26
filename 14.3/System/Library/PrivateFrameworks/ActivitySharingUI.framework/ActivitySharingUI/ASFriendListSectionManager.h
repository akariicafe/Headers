@class HKActivitySummaryQuery, NSSet, HKHealthStore, FIUIModel, ASFriendListQuery, NSObject, ASClient, FIUIClientToken, FIUIWorkoutDataProvider, NSCache;
@protocol OS_dispatch_queue;

@interface ASFriendListSectionManager : NSObject {
    HKHealthStore *_healthStore;
    ASClient *_client;
    FIUIModel *_model;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSCache *_displayContextToSortedSectionsCache;
    NSSet *_allFriends;
    ASFriendListQuery *_friendListQuery;
    HKActivitySummaryQuery *_meQuery;
    FIUIWorkoutDataProvider *_workoutDataProvider;
    long long _meQueryRetries;
    long long _friendQueryRetries;
    FIUIClientToken *_modelQueryToken;
    BOOL _shouldGenerateDemoData;
    BOOL _hasReceivedFriendListQueryResult;
    BOOL _hasReceivedMeQueryResult;
}

- (id)init;
- (void).cxx_destruct;
- (id)me;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (id)allFriends;
- (void)_queue_handleMyWorkoutsUpdate;
- (void)_calendarDayChangedNotification:(id)a0;
- (void)_startQueriesIfRequired;
- (BOOL)hasAnyFriendsSetup;
- (void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_stopQueries;
- (void)_createFakeFriends;
- (void)_startQueries;
- (void)_queue_startMeQuery;
- (void)_queue_startFriendsQuery;
- (void)_queue_stopQueries;
- (id)_createSectionsForFriends:(id)a0 withDisplayContext:(id)a1;
- (id)_copyFriends;
- (BOOL)_isWheelchairUserDisplayModeValidForFriends:(id)a0 filter:(long long)a1;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(id /* block */)a0;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(id /* block */)a0 comparator:(id /* block */)a1;
- (id)_friendWithUUID:(id)a0 fromFriends:(id)a1;
- (id)_queue_me;
- (id)sectionForFriendsInvitingMe;
- (id)sectionForFriendsRequestingMeToCompete;
- (unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;
- (unsigned long long)numberOfFriendsWithCompetitionRequestsAwaitingResponseFromMe;
- (long long)numberOfNewFriendsAllowed;
- (id)_filterFriends:(id)a0 withWheelchairUseAtCacheIndex:(id)a1;
- (void)_enumerateVisibleDaysForFriends:(id)a0 usingBlock:(id /* block */)a1;
- (void)_queue_updateWithNewData;
- (void)_queue_restartQueryAfterErrorCount:(long long)a0 withBlock:(id /* block */)a1;
- (void)_queue_handleActivitySummaryUpdate:(id)a0;
- (void)_postFriendsListChangedNotification;
- (id)_datesToShowSnapshotsForFriend:(id)a0 startingFromCurrentDateComponents:(id)a1;
- (id)_sortFriends:(id)a0 forDisplayMode:(long long)a1 cacheIndex:(id)a2;
- (id)initWithModel:(id)a0 andWorkoutDataProvider:(id)a1;
- (BOOL)hasInitializedFriendData;
- (id)sectionsForDisplayContext:(id)a0;
- (void)enumerateValidDisplayModesForFilter:(long long)a0 usingBlock:(id /* block */)a1;
- (id)sectionForFriendsInvitedByMe;
- (id)sectionForFriendsHidingDataFromMe;
- (id)sectionForFriendsMyDataIsHiddenFrom;
- (id)sectionForFriendsWithNoHiding;
- (id)sectionForFriendsRequestedToCompeteByMe;
- (id)sectionForFriendsCompetingWithMe;
- (id)friendWithUUID:(id)a0;
- (id)allActiveFriendsAsRecipients;
- (id)allDestinationsForActiveOrPendingFriends;
- (unsigned long long)totalNumberOfPendingRequests;
- (BOOL)hasReachedMaxNumberOfFriends;
- (id)_filterFriends:(id)a0 withSnapshotDataAtCacheIndex:(id)a1;
- (id)_filterFriends:(id)a0 withActiveFriendshipAtEndOfDay:(id)a1;

@end
