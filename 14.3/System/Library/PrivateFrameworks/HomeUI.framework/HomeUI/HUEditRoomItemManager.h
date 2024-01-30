@class HFStaticItem, HFZoneModule, HFRoomBuilder;

@interface HUEditRoomItemManager : HFItemManager

@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (retain, nonatomic) HFStaticItem *nameItem;
@property (retain, nonatomic) HFStaticItem *cameraItem;
@property (retain, nonatomic) HFStaticItem *chooseWallpaperItem;
@property (retain, nonatomic) HFStaticItem *wallpaperThumbnailItem;
@property (retain, nonatomic) HFStaticItem *wallpaperPickerItem;
@property (retain, nonatomic) HFStaticItem *removeItem;
@property (retain, nonatomic) HFZoneModule *zoneModule;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithRoomBuilder:(id)a0 delegate:(id)a1;
- (BOOL)_canDeleteRoom;

@end
