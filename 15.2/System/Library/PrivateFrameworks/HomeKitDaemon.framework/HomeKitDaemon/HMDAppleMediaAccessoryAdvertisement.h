@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement

@property (readonly) HMDDevice *device;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0 device:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 device:(id)a3;

@end
