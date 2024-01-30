@class HUDashboardTipModule, HUDashboardAccessoryTransformItemProvider, NSMutableDictionary, HFProgrammableSwitchItemProvider, HUBannerItemModule, HFFakeMediaAccessoryItemProvider, HFReorderableHomeKitItemList, HUDashboardContext, HUDashboardActionSetItemModule, HUServicePlaceholderItemModule, NSSet, HUStatusItemModule, HFAccessoryLikeItemProvider, HUDashboardCameraItemModule;
@protocol HUDashboardItemManagerDelegate;

@interface HUDashboardItemManager : HFItemManager

@property (retain, nonatomic) HFAccessoryLikeItemProvider *accessoryLikeItemProvider;
@property (retain, nonatomic) HUDashboardAccessoryTransformItemProvider *accessoryTransformItemProvider;
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider;
@property (retain, nonatomic) HFAccessoryLikeItemProvider *favoritesItemProvider;
@property (retain, nonatomic) HFAccessoryLikeItemProvider *speakersAndTVsItemProvider;
@property (retain, nonatomic) HFFakeMediaAccessoryItemProvider *fakeSpeakersAndTVsItemProvider;
@property (retain, nonatomic) HUDashboardActionSetItemModule *actionSetItemModule;
@property (retain, nonatomic) HUDashboardCameraItemModule *cameraItemModule;
@property (retain, nonatomic) HUDashboardTipModule *tipItemModule;
@property (retain, nonatomic) HUStatusItemModule *statusItemModule;
@property (retain, nonatomic) HUBannerItemModule *bannerItemModule;
@property (retain, nonatomic) HUServicePlaceholderItemModule *servicePlaceholderItemModule;
@property (retain, nonatomic) NSMutableDictionary *clientReorderableServiceListByRoom;
@property (retain, nonatomic) NSMutableDictionary *clientReorderableServiceByTypeList;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableFavoritesList;
@property (readonly, nonatomic) HUDashboardContext *context;
@property (weak, nonatomic) id<HUDashboardItemManagerDelegate> dashboardDelegate;
@property (readonly, nonatomic) BOOL isEmptyDashboard;
@property (readonly, nonatomic) NSSet *homeMenuStatusItems;

- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void).cxx_destruct;
- (void)setHome:(id)a0;
- (void)homeDidUpdateApplicationData:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)_itemForSorting;
- (id)itemModuleForSectionIdentifier:(id)a0;
- (id)_buildAccessoryCategorySectionsWithItems:(id)a0;
- (id)_buildFavoritesSectionWithFavoriteItems:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildNowPlayingSectionWithItems:(id)a0 forRouteIdentifier:(id)a1;
- (id)_buildRoomSectionsWithItems:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_buildStaticItemsForHome:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemSectionForRoom:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (void)_registerForExternalUpdates;
- (id)_sortedAccessoryTypeGroups;
- (void)_unregisterForExternalUpdates;
- (id)buildItemForHomeKitObject:(id)a0;
- (id)createRoomSectionsWithItems:(id)a0 sectionIdentifierBlock:(id /* block */)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (BOOL)isHomeMenuStatusItem:(id)a0;
- (id)matchingItemForHomeKitObject:(id)a0;
- (id)reorderableFavoritesList;
- (id)reorderableServiceListForRoom:(id)a0;
- (id)reorderableServiceListForType:(id)a0;
- (void)setReorderableFavoritesList:(id)a0;
- (void)setReorderableServiceList:(id)a0 forRoom:(id)a1;
- (void)setReorderableServiceList:(id)a0 forType:(id)a1;
- (void)updateItemSectionHeaderTitleForRoom:(id)a0;

@end
