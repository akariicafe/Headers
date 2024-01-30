@class NSString;

@interface HMDAccessoryMetricTransportDetails : HMFObject

@property (copy, nonatomic) NSString *accessoryProtocol;
@property (nonatomic) BOOL isAccessoryBatteryPowered;
@property (nonatomic) BOOL isAccessoryBridged;
@property (nonatomic) BOOL isHH2Enabled;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;

@end
