@class HMHome, NSString;
@protocol HFHomeKitObject;

@interface HUBannerItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
