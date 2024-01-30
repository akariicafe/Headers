@class HUDashboardContext, HFCameraItemProvider, HMRoom, HMHome;

@interface HUDashboardCameraItemModule : HFItemModule

@property (retain, nonatomic) HUDashboardContext *context;
@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;

- (void).cxx_destruct;
- (id)_reorderableHomeKitItemListKey;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithContext:(id)a0 itemUpdater:(id)a1;

@end
