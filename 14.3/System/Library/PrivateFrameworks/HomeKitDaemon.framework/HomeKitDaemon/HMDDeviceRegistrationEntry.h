@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) NSArray *accessoryUUIDList;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDevice:(id)a0 accessoryList:(id)a1;

@end
