@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) NSArray *accessoryUUIDList;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 accessoryList:(id)a1;

@end
