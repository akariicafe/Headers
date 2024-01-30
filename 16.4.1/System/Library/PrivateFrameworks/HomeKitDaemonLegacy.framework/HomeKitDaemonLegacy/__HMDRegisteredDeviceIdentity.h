@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity

@property (readonly) HMDDevice *device;

- (id)initWithIdentity:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 device:(id)a1;

@end
