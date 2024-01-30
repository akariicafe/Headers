@class NSDictionary, HAPDeviceID;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject

@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) NSDictionary *rawDiscoveryInfo;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 rawDiscoveryInfo:(id)a1;

@end
