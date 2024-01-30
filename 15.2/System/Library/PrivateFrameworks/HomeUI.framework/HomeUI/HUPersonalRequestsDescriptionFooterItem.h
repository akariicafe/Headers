@class HULocationDeviceManager;

@interface HUPersonalRequestsDescriptionFooterItem : HFItem

@property (nonatomic) BOOL hasSiriEndpointAccessories;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)a0;
- (id)_locationDeviceTextForDeviceNameString:(id)a0;

@end
