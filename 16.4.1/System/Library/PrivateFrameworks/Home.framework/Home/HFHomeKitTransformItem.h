@class NSString, HFItem;
@protocol HFHomeKitObject, HFHomeKitItemProtocol;

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol, HFAccessoryVendor>

@property (readonly, nonatomic) HFItem<HFHomeKitItemProtocol> *sourceHomeKitItem;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessories;

@end
