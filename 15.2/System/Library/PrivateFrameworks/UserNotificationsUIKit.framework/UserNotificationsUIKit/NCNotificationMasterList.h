@class NCNotificationListPersistentStateManager, NCNotificationListCache, NSDate, NSDictionary, NCNotificationSummarizedSectionList, NCNotificationCombinedSectionList, NCNotificationListRevealCoordinator, NCNotificationListStalenessEventTracker, NSMutableArray, NCNotificationListView, NSString, NCDigestScheduleManager, NCNotificationStructuredSectionList, NCSuggestionManager, NCNotificationListMigrationScheduler;
@protocol NCNotificationMasterListDelegate;

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCSuggestionManagerDelegate, NCNotificationListCacheDelegate, NCDigestScheduleManagerObserver, NCNotificationListPersistentStateManagerDelegate, NCNotificationListMigrationSchedulerDelegate, NCNotificationListComponent>

@property (retain, nonatomic) NSMutableArray *notificationSections;
@property (retain, nonatomic) NCNotificationListRevealCoordinator *revealCoordinator;
@property (retain, nonatomic) NCNotificationListCache *notificationListCache;
@property (retain, nonatomic) NCNotificationListCache *notificationSummaryCache;
@property (retain, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker;
@property (nonatomic) BOOL shouldAllowNotificationHistoryReveal;
@property (nonatomic, getter=isMissedSectionActive) BOOL missedSectionActive;
@property (nonatomic, getter=isScheduledDeliveryEnabled) BOOL scheduledDeliveryEnabled;
@property (retain, nonatomic) NCNotificationListPersistentStateManager *persistentStateManager;
@property (retain, nonatomic) NCNotificationStructuredSectionList *incomingSectionList;
@property (retain, nonatomic) NCNotificationCombinedSectionList *historySectionList;
@property (retain, nonatomic) NCNotificationStructuredSectionList *missedSectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *currentDigestSectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingDigestSectionList;
@property (retain, nonatomic) NCNotificationSummarizedSectionList *upcomingMissedSectionList;
@property (retain, nonatomic) NCDigestScheduleManager *digestScheduleManager;
@property (nonatomic) BOOL deferCurrentDigestPresentationForPersistedDataLoad;
@property (nonatomic, getter=isUpcomingDigestVisible) BOOL upcomingDigestVisible;
@property (retain, nonatomic) NCNotificationListMigrationScheduler *migrationScheduler;
@property (nonatomic) BOOL deferDigestMigration;
@property (retain, nonatomic) NSMutableArray *notificationRequestsPendingMigration;
@property (copy, nonatomic) id /* block */ scrollCompletionBlock;
@property (nonatomic) double scrollCompletionBlockOffsetThreshold;
@property (nonatomic, getter=isDigestFeatureEnabled) BOOL digestFeatureEnabled;
@property (nonatomic, getter=isSummaryRedesignEnabled) BOOL summaryRedesignEnabled;
@property (copy, nonatomic) NSDictionary *persistentStoredListInfo;
@property (weak, nonatomic) id<NCNotificationMasterListDelegate> delegate;
@property (retain, nonatomic) NCNotificationListView *masterListView;
@property (retain, nonatomic) NCSuggestionManager *suggestionManager;
@property (nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly, nonatomic) BOOL hasVisibleUrgentBreakthroughContent;
@property (readonly, nonatomic) unsigned long long totalNotificationCount;
@property (nonatomic, getter=isOnboardingSummaryVisible) BOOL onboardingSummaryVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (copy, nonatomic) NSString *logDescription;
@property (readonly, copy, nonatomic) NSDate *comparisonDate;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)reloadNotificationRequest:(id)a0;
- (void)removeNotificationRequest:(id)a0;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)_migrateOnScheduleNotificationRequestsFromIncomingSectionToHistorySection:(id)a0;
- (id)_newSummaryOrderProviderOfType:(unsigned long long)a0 fromSummaryOrderProvider:(id)a1;
- (BOOL)containsNotificationRequest:(id)a0;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)a0;
- (void)insertNotificationRequest:(id)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)recycleView:(id)a0;
- (id)suggestionManagerRequestsCurrentModeConfiguration:(id)a0;
- (id)_sectionForNotificationRequest:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (void)suggestionManager:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)_missedSectionTitleForDNDMode:(id)a0;
- (void)_migrateCurrentDigestSectionListToReadSection;
- (id)suggestionManager:(id)a0 notificationRequestForUUID:(id)a1;
- (void)_updateVisibleRectForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)updateNotificationSystemSettings:(id)a0 previousSystemSettings:(id)a1;
- (void)reloadRemoteSuggestions;
- (void)persistentStateManager:(id)a0 hasStoredDataForSectionType:(unsigned long long)a1;
- (void)_regroupAllNotificationGroups;
- (void)suggestionManager:(id)a0 setModeConfiguration:(id)a1;
- (void)persistentStateManager:(id)a0 didFetchSummaryMigrationTime:(id)a1;
- (void)_dissolveUpcomingDigestSectionListToHistorySection;
- (void)modifyNotificationRequest:(id)a0;
- (BOOL)notificationStructuredSectionList:(id)a0 shouldScrollToTopForGroupList:(id)a1;
- (id)_notificationSectionListsForEnumeration;
- (void)_toggleCurrentDigestSectionListVisibility;
- (long long)_atxDigestDeliveryTimeForDeliveryOrder:(long long)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_configureCurrentDigestSectionListWithDigestInfo:(id)a0 sectionType:(unsigned long long)a1 summaryOrderProviderType:(unsigned long long)a2;
- (void)_toggleVisibilityInHistorySectionListForSectionList:(id)a0 atIndex:(unsigned long long)a1 isSectionHidden:(BOOL)a2 animated:(BOOL)a3;
- (void)_insertCurrentDigestSectionListToSectionList:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_isCurrentDigestListInMissedSectionList;
- (id)notificationRequestWithNotificationIdentifier:(id)a0 sectionIdentifier:(id)a1;
- (void)_migrateUpcomingMissedSectionToIncoming;
- (void)publishUpcomingDigest:(id)a0;
- (id)_listInfoForStateCapture;
- (void)_insertNotificationRequest:(id)a0;
- (void)_updateVisibilityForSectionLists;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)suggestionManager:(id)a0 requestsUpdatingContentForNotificationRequest:(id)a1;
- (void)migrateNotificationsFromIncomingSectionToHistorySectionAndHideHistorySection:(BOOL)a0;
- (id)subListsForNotificationListRevealCoordinator:(id)a0;
- (void)suggestionManager:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)notificationListMigrationSchedulerRequestsMigratingNotificationDigest:(id)a0;
- (Class)notificationListCacheNotificationViewControllerClass:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (id)_newSummaryOrderProviderOfType:(unsigned long long)a0 summaryHeading:(id)a1 summaryDate:(id)a2 atxDigestDeliveryTime:(long long)a3 isOnboardingSummary:(BOOL)a4;
- (void)persistentStateManager:(id)a0 didFetchMigrationTime:(id)a1 forNotificationRequest:(id)a2;
- (id)_newMissedSectionWithTitle:(id)a0 summaryHeading:(id)a1 logDescription:(id)a2 dndMode:(id)a3;
- (BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)a0;
- (void)_configureUpcomingDigestSectionListWithDigestInfo:(id)a0;
- (void)_scheduleNotificationDigestMigrationIfNecessary;
- (id)_newDigestSectionListWithTitle:(id)a0 sectionType:(unsigned long long)a1 summaryOrderProvider:(id)a2 logDescription:(id)a3;
- (BOOL)_isPersistentStateCurrentDigestInMissedSection;
- (BOOL)_isCurrentDigestListAboveHistorySectionList;
- (id)_digestTestRecipe;
- (void)persistentStateManager:(id)a0 didFetchStoredListInfo:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)suggestionManager:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)toggleMissedSectionActive:(BOOL)a0 forDNDMode:(id)a1 hideVisibleNotifications:(BOOL)a2;
- (void)notificationListRevealCoordinator:(id)a0 updatedRevealState:(BOOL)a1;
- (void)testDissolveCurrentDigestToHistory;
- (void)publishScheduledDigest:(id)a0 upcomingDigest:(id)a1;
- (void).cxx_destruct;
- (void)_performDeferredMigrationIfNecessary;
- (void)_removeSectionListInHistorySectionList:(id)a0 animated:(BOOL)a1;
- (void)_migrateUpcomingDigestSectionListToCurrentDigestSectionList;
- (void)scrollViewDidScroll:(id)a0;
- (void)_insertSectionListInHistorySectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (id)init;
- (void)_migrateNotificationsFromList:(id)a0 toList:(id)a1 passingTest:(id /* block */)a2 filterRequestsPassingTest:(id /* block */)a3 hideToList:(BOOL)a4 clearRequests:(BOOL)a5 filterForDestination:(BOOL)a6 animateRemoval:(BOOL)a7 reorderGroupNotifications:(BOOL)a8;
- (void)_configureNotificationSectionList:(id)a0 notificationCache:(id)a1 notificationListViewRevealed:(BOOL)a2 logDescription:(id)a3;
- (void)_scheduleNotificationRequestsForMigrationFromIncomingListPassingTest:(id /* block */)a0;
- (void)testDigestTimerUpdated;
- (void)persistentStateManager:(id)a0 finishedLoadingDataForSectionType:(unsigned long long)a1;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)_upcomingDigestSectionListIndexInHistorySectionList;
- (void)_updateUpcomingDigestSectionListWithDigestInfo:(id)a0;
- (void)_upgradeCurrentDigestSectionListForPromotionAboveFold;
- (void)testPromoteUpcomingDigestToCurrentDigest;
- (void)_insertCurrentDigestSectionList;
- (id)_filterNotificationsInGroupLists:(id)a0 withDestinationsForSectionList:(id)a1;
- (void)notificationListMigrationScheduler:(id)a0 requestsMigratingNotificationRequests:(id)a1;
- (void)_dissolveCurrentDigestSectionListToHistorySection;
- (void)_removeCurrentDigestSectionListFromHistorySectionList;
- (BOOL)notificationStructuredSectionList:(id)a0 shouldFilterNotificationRequest:(id)a1;
- (id)_sectionsForStateDump;
- (void)_sortNotificationGroupsIfNecessary;
- (void)_updateNotificationListPersistentState;
- (void)listViewControllerPresentedByUserAction;
- (void)_toggleCurrentDigestSectionListVisibilityInHistorySection;
- (void)_setupNotificationSectionLists;
- (void)migrateNotificationsFromIncomingSectionToHistorySection;
- (void)testMigrateCurrentDigestToHistory;
- (void)testDigestTimerRevoke;
- (void)_configureUpcomingMissedSectionForDNDMode:(id)a0;
- (void)revokeUpcomingDigest:(id)a0;
- (id)notificationStructuredSectionList:(id)a0 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)a1 isLongLook:(BOOL)a2;
- (id)_listInfoForPersistentState;
- (id)suggestionManager:(id)a0 requestsSectionSettingsForSectionIdentifier:(id)a1;
- (BOOL)_isNotificationRequest:(id)a0 forSectionList:(id)a1;
- (void)suggestionManager:(id)a0 requestsPresentingNotificationManagementViewType:(unsigned long long)a1 forNotificationRequest:(id)a2 withPresentingView:(id)a3;
- (void)_removeCurrentDigestSectionListFromMissedSectionList;
- (BOOL)_isCurrentDigestListInHistorySectionList;
- (id)_newMissedSectionListForDNDMode:(id)a0;
- (id)_visibleNotificationRequests;
- (BOOL)shouldDelayDeliveryOfNotificationRequest:(id)a0;
- (void)_addStateCaptureBlock;
- (void)_removeCurrentDigestSectionList;
- (id)_sectionListsForPersistentState;
- (void)_toggleUpcomingDigestSectionListVisibility;
- (id)_sectionForStoredNotificationRequestOfSectionType:(unsigned long long)a0;
- (void)_insertCurrentDigestSectionListToHistorySectionList;
- (void)_toggleUpcomingMissedSectionListVisibility;
- (void)suggestionManager:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)testDigestTimerFired;
- (void)revealCoordinatorDidScrollToReveal:(id)a0;
- (void)_removeCurrentDigestSectionListFromSectionList:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)notificationStructuredSectionList:(id)a0 requestsScrollingToContentOffset:(double)a1 withCompletion:(id /* block */)a2;
- (void)_insertCurrentDigestSectionListToMissedSectionList;
- (void)_notificationListDidChangeContent;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)a0;

@end
