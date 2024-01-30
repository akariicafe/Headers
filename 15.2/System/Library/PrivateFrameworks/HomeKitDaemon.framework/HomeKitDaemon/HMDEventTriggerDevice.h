@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDevice:(id)a0 forHome:(id)a1;
- (id)initWithCurrentDeviceForHome:(id)a0;

@end
