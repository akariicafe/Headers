@class NSArray, NSString;

@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging>

@property (readonly, nonatomic) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)handlePolicyStatusChange:(id)a0;
- (id)initWithPolicies:(id)a0 workQueue:(id)a1;

@end
