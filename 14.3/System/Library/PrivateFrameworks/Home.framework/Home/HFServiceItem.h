@class NSSet, NSDictionary, NSString, HMService, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating>

@property (class, readonly, nonatomic) NSDictionary *_serviceTypeToServiceItemClassMap;
@property (class, readonly) NSSet *supportedServiceTypes;

@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

+ (Class)itemClassForService:(id)a0;
+ (id)serviceItemForService:(id)a0 valueSource:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValueSource:(id)a0 service:(id)a1;
- (id)accessories;
- (id)servicesToReadForCharacteristicType:(id)a0;
- (id)controlItemValueSourceForServices:(id)a0;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)controlItemValueSourceForPrimaryService;
- (id)performStandardUpdateWithCharacteristicTypes:(id)a0 options:(id)a1;
- (id)descriptionForCharacteristic:(id)a0 withValue:(id)a1;
- (id)controlDescriptionForCharacteristic:(id)a0 withValue:(id)a1;
- (id)createControlItems;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)_descriptionBuilder;
- (id)_allRepresentedServices;
- (id)_actionableCharacteristics;
- (id)characteristicsToReadForCharacteristicTypes:(id)a0 controlItems:(id)a1;
- (id)_augmentedStandardResultsForUpdateResponse:(id)a0 controlItems:(id)a1;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)a0 incrementalValue:(id)a1;

@end
