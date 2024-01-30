@class NSString, NSSet, HFServiceBuilder, HFServiceItem, HMHome;
@protocol HFHomeKitObject, HFCharacteristicValueSource;

@interface HFServiceBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>

@property (readonly, nonatomic) HFServiceItem *serviceItem;
@property (readonly, nonatomic) HFServiceBuilder *serviceBuilder;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)namingComponentForHomeKitObject;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithServiceBuilder:(id)a0;
- (id)initWithServiceBuilder:(id)a0 valueSource:(id)a1;

@end
