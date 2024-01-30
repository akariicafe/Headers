@class NSMutableArray;

@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    BOOL _adjustsFontForContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *sectionLists;
@property (retain, nonatomic) NSMutableArray *chronologicalSectionLists;

- (void)clearAllNotificationRequests;
- (void)removeNotificationSectionList:(id)a0 animated:(BOOL)a1;
- (void)reloadNotificationRequest:(id)a0;
- (void)insertNotificationSectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (id)orderedNotificationListComponents;
- (unsigned long long)notificationCount;
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
- (id)_allSectionLists;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (BOOL)containsNotificationRequest:(id)a0;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (void)sortNotificationGroupListsIfNecessary;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)a0;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (BOOL)containsSectionList:(id)a0;
- (void)insertNotificationSectionListChronologically:(id)a0 animated:(BOOL)a1;
- (id)sectionListAtIndex:(unsigned long long)a0;
- (void)_performOperationOnAllSectionLists:(id /* block */)a0;
- (unsigned long long)indexOfSectionList:(id)a0;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (BOOL)hasVisibleContentToReveal;
- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (id)allNotificationRequests;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (BOOL)adjustsFontForContentSizeCategory;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;

@end
