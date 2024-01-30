@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)taskQueueDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)maintenanceWorkDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)postUpgradeDescriptor;
+ (id)cellularDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;

- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;

@end
