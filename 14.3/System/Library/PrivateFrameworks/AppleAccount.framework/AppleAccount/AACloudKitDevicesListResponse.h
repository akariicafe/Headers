@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse

@property (readonly, nonatomic) NSArray *incompatibleDevices;
@property (readonly, nonatomic) NSArray *needUpgradeDevices;
@property (readonly, nonatomic) NSArray *incompatibleDeviceNames;
@property (readonly, nonatomic) NSArray *needUpgradeDeviceNames;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
