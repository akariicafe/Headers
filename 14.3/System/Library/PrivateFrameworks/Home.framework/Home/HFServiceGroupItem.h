@class HMServiceGroup, NSString, NSSet, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceGroupItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>

@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
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

+ (BOOL)_isControlItem:(id)a0 similarToControlItem:(id)a1;
+ (BOOL)_isControlItem:(id)a0 identicalToControlItem:(id)a1;
+ (id)_combinedWriteErrorForError:(id)a0 serviceGroupTitle:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithValueSource:(id)a0 serviceGroup:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_buildServiceItems;
- (id)_unanimousValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)_mostCommonValueInServiceItems:(id)a0 valueProvider:(id /* block */)a1;
- (id)_sortDescriptorsForServiceItems;
- (id)_mostCommonValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (id)primaryStateControlItem;
- (id)accessories;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)_buildControlItemsForServiceItems:(id)a0;
- (id)_mergedIconDescriptorForServiceItems:(id)a0;
- (id)_aggregatedValueSource;
- (id)incrementalStateControlItem;
- (id)allControlItems;
- (double)_averageNumericalValueForResultsKey:(id)a0 inServiceItems:(id)a1;
- (long long)_highestIntegerValueForResultsKey:(id)a0 inServiceItems:(id)a1;

@end
