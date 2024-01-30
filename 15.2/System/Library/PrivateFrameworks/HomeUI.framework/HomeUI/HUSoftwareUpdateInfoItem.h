@class NSSet;

@interface HUSoftwareUpdateInfoItem : HFItem

@property (readonly, nonatomic) NSSet *accessories;

+ (id)_dateFormatter;
+ (id)_iconDescriptorForAccessories:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessories:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
