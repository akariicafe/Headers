@class NSString;
@protocol HFHomeKitObject;

@interface HFPlaceholderItem : HFItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
