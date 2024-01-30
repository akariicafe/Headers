@class HMDDevice, HMFTimer, HMDAccessory;

@interface HMDPendingNewAccessorySetupContext : HMFObject

@property (readonly) HMDAccessory *accessory;
@property (readonly) HMDDevice *remoteDevice;
@property (readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 remoteDevice:(id)a1 timer:(id)a2;

@end
