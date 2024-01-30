@class HMHome, NSSet;

@interface HUSoftwareUpdateActionAndProgressItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *accessories;

- (id)initWithAccessories:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)initWithAccessory:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_filteredAccessories;

@end
