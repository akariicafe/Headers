@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse

@property (readonly, nonatomic) NSArray *incompatibleDevices;
@property (readonly, nonatomic) NSArray *needUpgradeDevices;
@property (readonly, nonatomic) NSArray *incompatibleDeviceNames;
@property (readonly, nonatomic) NSArray *needUpgradeDeviceNames;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
