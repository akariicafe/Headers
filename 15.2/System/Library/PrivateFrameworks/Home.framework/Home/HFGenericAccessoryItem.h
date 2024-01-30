@class NSString, NSSet, HMAccessory, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFGenericAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating>

@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

- (id)accessories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithValueSource:(id)a0;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
