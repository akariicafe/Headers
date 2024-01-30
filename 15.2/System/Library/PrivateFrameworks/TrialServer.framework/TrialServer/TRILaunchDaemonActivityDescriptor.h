@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)cellularDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)recurrentRollbackDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)taskQueueDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)postUpgradeDescriptor;
+ (id)clientTriggeredWifiDescriptor;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)init;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (unsigned long long)hash;

@end
