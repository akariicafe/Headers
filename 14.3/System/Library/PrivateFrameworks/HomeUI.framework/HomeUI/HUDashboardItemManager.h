@class HFProgrammableSwitchItemProvider, HFActionSetListItem, HFDemoModeAccessoryItemProvider, HFTargetControlItemProvider, HFServiceItemProvider, HUDashboardContext, HFAccessoryItemProvider, HFCameraListItem, HFStaticItem, HFMediaAccessoryItemProvider, HFReorderableHomeKitItemList, HFGenericAccessoryItemProvider, HFServiceGroupItemProvider, HFItem;
@protocol HUDashboardItemManagerDelegate;

@interface HUDashboardItemManager : HFItemManager

@property (readonly, weak, nonatomic) id<HUDashboardItemManagerDelegate> dashboardDelegate;
@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFServiceGroupItemProvider *serviceGroupItemProvider;
@property (retain, nonatomic) HFGenericAccessoryItemProvider *genericItemProvider;
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider;
@property (retain, nonatomic) HFTargetControlItemProvider *targetControlItemProvider;
@property (retain, nonatomic) HUDashboardContext *context;
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider;
@property (retain, nonatomic) HFDemoModeAccessoryItemProvider *demoModeAccessoryItemProvider;
@property (retain, nonatomic) HFItem *headlineItem;
@property (retain, nonatomic) HFItem *statusListItem;
@property (retain, nonatomic) HFItem *statusBannerItem;
@property (retain, nonatomic) HFItem *multiUserTokenFixBannerItem;
@property (retain, nonatomic) HFItem *mediaServiceErrorBannerItem;
@property (retain, nonatomic) HFItem *welcomeUIBannerItem;
@property (retain, nonatomic) HFActionSetListItem *sceneListItem;
@property (retain, nonatomic) HFStaticItem *placeholderSceneListItem;
@property (retain, nonatomic) HFCameraListItem *cameraListItem;
@property (retain, nonatomic) HFItem *editItem;
@property (retain, nonatomic) HFItem *placeholderServicesListItem;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableServiceList;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableCameraList;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL forceHideMultiUserTokenFixBannerItem;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableServiceList;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableCameraList;
@property (retain, nonatomic) id homeMediaAccount;

- (void)_updateFilters;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (void)settings:(id)a0 didUpdateSetting:(id)a1;
- (void)settings:(id)a0 didWriteValueForSettings:(id)a1 failedSettings:(id)a2;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)settingsDidUpdate:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (void)homeDidUpdateWallpaper:(id)a0;
- (void)home:(id)a0 didUpdateWallpaperForRoom:(id)a1;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemForSorting;
- (id)_itemsToHideInSet:(id)a0;
- (void)_willUpdateSections;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (BOOL)isEmptyHomeDashboard;
- (BOOL)dashboardHasPlaceholderServiceOrSceneItems;
- (id)_currentSectionIdentifiers;
- (void)_updateContextForHome:(id)a0 room:(id)a1;
- (BOOL)shouldShowWelcomeUIBanner;
- (BOOL)isServiceLikeItemsAndCamerasEmpty;
- (BOOL)isEmptyDashboard;
- (BOOL)hasVisibleServiceLikeItems;
- (BOOL)isStatusListVisible;

@end
