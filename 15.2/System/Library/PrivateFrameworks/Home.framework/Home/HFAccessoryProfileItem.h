@class HMAccessoryProfile, NSString, NSSet, HMAccessory, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFAccessoryProfileItem : HFItem <HFAccessoryProfileVendor, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMAccessoryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;

- (id)accessories;
- (void).cxx_destruct;
- (id)init;
- (id)profiles;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithProfile:(id)a0 valueSource:(id)a1;

@end
