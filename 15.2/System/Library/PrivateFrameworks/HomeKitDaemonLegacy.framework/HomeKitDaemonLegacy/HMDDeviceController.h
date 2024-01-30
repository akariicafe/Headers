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

+ (id)logCategory;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithIdentifier:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
