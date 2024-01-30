@class HMHome, NSString, HMResidentDevice;
@protocol HFHomeKitObject;

@interface HFResidentDeviceStatusDetailsItem : HFItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMResidentDevice *residentDevice;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
