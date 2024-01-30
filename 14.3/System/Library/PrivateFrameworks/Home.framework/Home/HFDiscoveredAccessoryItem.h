@class NSString, HFDiscoveredAccessory, NSSet, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFDiscoveredAccessoryItem : HFItem <HFServiceLikeItem>

@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessories;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithDiscoveredAccessory:(id)a0;
- (id)initWithDiscoveredAccessory:(id)a0 valueSource:(id)a1;

@end
