@class NSString, NSSet, HMAccessory, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFTargetControlAccessoryItem : HFItem <HFServiceLikeItem, HFServiceLikeBuilderCreating>

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

- (id)accessories;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithValueSource:(id)a0;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;
- (BOOL)shouldReduceOptionItemsForNotifyingCharacteristics;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)iconDescriptor;

@end
