@class NSSet, NSString, HFItem;
@protocol HFHomeKitItemProtocol, HFServiceVendor, HFActionBuilderFactory;

@interface HFServiceLikeTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFActionBuilderFactory>

@property (readonly, nonatomic) HFItem<HFHomeKitItemProtocol, HFServiceVendor, HFActionBuilderFactory> *sourceServicePickerItem;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
