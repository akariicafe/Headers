@class NSSet, HFItem, NSString, HMHome;
@protocol HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceActionItem : HFItem <HFServiceLikeItem>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *containingItem;
@property (retain, nonatomic) NSSet *actions;
@property (retain, nonatomic) NSSet *actionBuilders;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *services;

+ (id)_percentFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAction:(id)a0;
- (id)initWithHome:(id)a0 containingItem:(id)a1;
- (id)accessories;
- (id)copyWithValueSource:(id)a0;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (void)_getDesiredItemDescription:(id *)a0 controlDescription:(id *)a1 withSourceItemResults:(id)a2;
- (id)_characteristicTypeToTargetValuesMap;
- (void)addActionBuilder:(id)a0;
- (id)serviceActionItemForChildServiceItem:(id)a0;

@end
