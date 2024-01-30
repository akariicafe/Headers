@class NSString, NSDictionary, HMAccessory, NSSet, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFDemoModeAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating, HFItemBuilderItem, HFGroupableItemProtocol>

@property (retain, nonatomic) NSDictionary *configInfo;
@property (weak, nonatomic) HMAccessory *accessory;
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

+ (id)accessoryItemForAccessory:(id)a0;

- (id)accessories;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hf_serviceNameComponents;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)mediaProfileContainer;
- (BOOL)isMediaSystemDemoType;

@end
