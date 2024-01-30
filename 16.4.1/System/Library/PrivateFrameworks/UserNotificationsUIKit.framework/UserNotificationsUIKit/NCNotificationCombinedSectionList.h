@class NSMutableArray;

@interface NCNotificationCombinedSectionList : NCNotificationStructuredSectionList {
    BOOL _adjustsFontForContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *sectionLists;
@property (retain, nonatomic) NSMutableArray *chronologicalSectionLists;

- (id)notificationListView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (BOOL)containsSectionList:(id)a0;
- (void)_performOperationOnAllSectionLists:(id /* block */)a0;
- (id)_allSectionLists;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (void)insertNotificationSectionListChronologically:(id)a0 animated:(BOOL)a1;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (unsigned long long)indexOfSectionList:(id)a0;
- (unsigned long long)notificationCount;
- (double)notificationListView:(id)a0 heightForItemAtIndex:(unsigned long long)a1 withWidth:(double)a2;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)insertNotificationSectionList:(id)a0 atIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;
- (void)removeNotificationSectionList:(id)a0 animated:(BOOL)a1;
- (id)sectionListAtIndex:(unsigned long long)a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (void)toggleFilteringForSectionIdentifier:(id)a0 shouldFilter:(BOOL)a1;
- (void)collapseGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (unsigned long long)count;
- (void)mergeNotificationGroups:(id)a0 reorderGroupNotifications:(BOOL)a1;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void)expandGroupForNotificationRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)containsNotificationRequest:(id)a0;
- (void)notificationsLoadedForSectionIdentifier:(id)a0;
- (id)orderedNotificationListComponents;
- (void)clearAll;
- (void)reloadNotificationRequest:(id)a0;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (void)sortNotificationGroupListsIfNecessary;
- (id)allNotificationRequests;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (BOOL)hasVisibleContentToReveal;

@end
