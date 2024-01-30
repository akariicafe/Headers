@class NSString, NSSet, HMAccessory, HFMediaAccessoryCommonSettingsManager, NSArray, HMHome;
@protocol HFAccessoryRepresentable, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSSet *serviceItems;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) BOOL isCompoundItem;
@property (readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property (readonly, nonatomic) id<HFHomeKitObject> primaryHomeKitObject;
@property (readonly, nonatomic) NSArray *allHomeKitObjects;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (BOOL)isAnnounceEnabled;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDoorbellChimeEnabled;
- (BOOL)containsActions;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)controlItemsForService:(id)a0;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)enableDoorbellChime:(BOOL)a0;
- (id)initWithAccessory:(id)a0 valueSource:(id)a1;
- (BOOL)isAudioAnalysisEnabled;
- (BOOL)isSiriDisabled;
- (BOOL)isSiriEndpointAccessory;
- (id)serviceItemForService:(id)a0;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)setEnableAnnounce:(BOOL)a0;
- (id)setEnableAudioAnalysis:(BOOL)a0;
- (id)setSiriDisabled:(BOOL)a0;
- (BOOL)shouldShowMutedMicIcon;
- (id)_sortDescriptorsForServiceItems;
- (id)_buildControlDescription;
- (id)_buildControlItems;
- (id)_buildServiceItems;
- (id)_buildTileDescription:(BOOL)a0;
- (id)_collectAllChildItems;
- (id)_mostCommonValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)_mostCommonValueInServiceItems:(id)a0 valueProvider:(id /* block */)a1;
- (id)_repeatingDescriptionsToCoalesce;
- (id)_unanimousValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (BOOL)isMultiLightDevice;
- (BOOL)isMultiSensorDevice;

@end
