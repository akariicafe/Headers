@class NSUUID, NCNotificationSummaryOrderProvider, NSString, UIView;

@interface NCNotificationSummarizedSectionList : NCNotificationCombinedSectionList <NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationSummaryOrderProviderDelegate> {
    BOOL _adjustsFontForContentSizeCategory;
}

@property (retain, nonatomic) UIView *summaryPlatterView;
@property (nonatomic) BOOL shouldAdjustIndex;
@property (readonly, copy, nonatomic) NSUUID *atxUUID;
@property (retain, nonatomic) NCNotificationSummaryOrderProvider *summaryOrderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)notificationGroupListShouldReloadNotificationCells:(id)a0;
- (void)removeNotificationRequest:(id)a0;
- (void)_removeViewFromListAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_configureSectionListView:(id)a0;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)_insertViewToListAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (BOOL)_shouldHideNotificationGroupList:(id)a0;
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)a0;
- (id)_newSectionHeaderView;
- (void)notificationSummaryOrderProvider:(id)a0 didUpdateOrderedNotificationGroupLists:(id)a1;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void)insertNotificationRequest:(id)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)notificationSummaryOrderProviderRequestsReloadingLeadingSummaryPlatterView:(id)a0;
- (void)_expandSection;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (id)comparisonDate;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (BOOL)_shouldHideNotificationRequest:(id)a0;
- (void)_collapseAllGroupListViews;
- (void)notificationSummaryOrderProvider:(id)a0 requestsPerformingDefaultActionForNotificationRequest:(id)a1 inGroupList:(id)a2;
- (void)_collapseSection;
- (id)listComponentDelegateForSummaryPlatterViewForNotificationSummaryOrderProvider:(id)a0;
- (void)sectionHeaderViewDidRequestCollapsing:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_didPerformSignificantUserInteraction;
- (id)materialGroupNameBaseForNotificationSummaryOrderProvider:(id)a0;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)_hideSummaryPlatterView;
- (void)_updateSectionForRankOrderedIfNecessaryAndReloadDigest:(BOOL)a0;
- (void)notificationSummaryOrderProviderDidTapOnLeadingSummaryPlatterView:(id)a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (id)_notificationGroupsForDigestRankOrdering;
- (void).cxx_destruct;
- (void)_showSummaryPlatterView;
- (unsigned long long)notificationCountForSummaryOrderProvider:(id)a0;
- (id)titlesForSectionListsInSummaryForSummaryOrderProvider:(id)a0;
- (void)_collapseAllSectionListViews;
- (void)collapseSummarizedSectionList;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void)_reloadGroupListLeadingNotificationRequests;
- (void)_prepareForExpand;

@end
