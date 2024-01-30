@class HFUserItem, HULocationDeviceManager, HUPresenceCurrentUserLocationDevice;

@interface HUPresenceUserOptionItem : HFItem

@property (readonly, nonatomic) HFUserItem *userItem;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithUserItem:(id)a0 selectedLocationDevice:(id)a1 locationDeviceManager:(id)a2;

@end
