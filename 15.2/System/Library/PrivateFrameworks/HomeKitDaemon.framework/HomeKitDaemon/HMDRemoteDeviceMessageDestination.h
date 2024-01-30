@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)description;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (id)remoteDestinationString;

@end
