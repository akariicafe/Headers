@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (id)remoteDestinationString;

@end
