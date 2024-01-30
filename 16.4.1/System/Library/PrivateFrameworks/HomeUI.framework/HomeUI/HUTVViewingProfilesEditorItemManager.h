@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager

@property (readonly, nonatomic) HUTVViewingProfilesDevicesItemModule *tvpDevicesModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithDelegate:(id)a0 userItem:(id)a1;

@end
