@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)retryFailuresDescriptor;
+ (id)cellularDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)taskQueueDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)clientTriggeredWifiDescriptor;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;

@end
