@class HFCameraItemProvider, HMRoom, HFReorderableHomeKitItemList;

@interface HUGridCameraItemManager : HFItemManager

@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider;
@property (retain, nonatomic) HFReorderableHomeKitItemList *clientReorderableCameraList;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) BOOL onlyShowsFavorites;
@property (retain, nonatomic) HFReorderableHomeKitItemList *reorderableCameraList;

- (void)_updateFilters;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (BOOL)_requiresNotificationsForCharacteristic:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemForSorting;
- (id)matchingItemForHomeKitObject:(id)a0;
- (id)initWithDelegate:(id)a0 room:(id)a1;
- (id)cameraItemAssociatedWithCameraProfile:(id)a0;

@end
