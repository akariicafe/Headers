@class HFAccessoryBuilder, NSString, HFItem, NSSet, HMHome;
@protocol HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>

@property (retain, nonatomic) HFAccessoryBuilder *accessoryBuilder;
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *accessoryItem;
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
- (id)initWithAccessoryBuilder:(id)a0 valueSource:(id)a1;

@end
