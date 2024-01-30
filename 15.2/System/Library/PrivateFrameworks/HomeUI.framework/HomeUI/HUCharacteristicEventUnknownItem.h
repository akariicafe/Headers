@class NSSet, NSString;

@interface HUCharacteristicEventUnknownItem : HFItem <HFServiceVendor>

@property (readonly, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessories;

@end
