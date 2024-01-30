@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)initWithIdentity:(id)a0 device:(id)a1;

@end
