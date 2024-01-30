@class NSArray;

@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy

@property (readonly, nonatomic) NSArray *policies;

+ (id)logCategory;

- (void)configure;
- (void)_registerForNotifications;
- (BOOL)evaluate;
- (void).cxx_destruct;
- (void)handlePolicyStatusChange:(id)a0;
- (id)initWithPolicies:(id)a0 accessory:(id)a1 workQueue:(id)a2;

@end
