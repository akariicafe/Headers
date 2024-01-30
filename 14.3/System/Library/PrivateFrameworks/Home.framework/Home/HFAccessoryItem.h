@class NSSet, NSString, HMAccessory, NSArray, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFAccessoryItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>

@property (retain, nonatomic) NSSet *serviceItems;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) id<HFHomeKitObject> primaryHomeKitObject;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_buildServiceItems;
- (id)_unanimousValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)serviceItemForService:(id)a0;
- (BOOL)isMultiSensorDevice;
- (BOOL)isMultiLightDevice;
- (id)_buildControlDescription;
- (id)_buildControlItems;
- (id)_collectAllChildItems;
- (id)_mostCommonValueInServiceItems:(id)a0 valueProvider:(id /* block */)a1;
- (id)_sortDescriptorsForServiceItems;
- (id)_buildTileDescription:(BOOL)a0;
- (id)controlItemsForService:(id)a0;
- (id)_mostCommonValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)accessories;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)copyWithValueSource:(id)a0;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;

@end
