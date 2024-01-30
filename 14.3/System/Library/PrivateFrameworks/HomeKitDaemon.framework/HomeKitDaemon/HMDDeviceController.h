@class NSUUID, HMDDevice, NSString;
@protocol HMDDeviceControllerDelegate, HMFLocking;

@interface HMDDeviceController : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
    HMDDevice *_device;
}

@property (weak) id<HMDDeviceControllerDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)logCategory;

- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)a0;
- (id)logIdentifier;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
