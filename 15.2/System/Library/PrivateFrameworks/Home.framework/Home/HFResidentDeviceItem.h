@class NSString, HMResidentDevice;
@protocol HFHomeKitObject;

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMResidentDevice *residentDevice;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithResidentDevice:(id)a0;

@end
