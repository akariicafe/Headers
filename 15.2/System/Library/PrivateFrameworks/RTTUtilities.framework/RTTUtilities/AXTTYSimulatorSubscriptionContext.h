@class NSUUID;

@interface AXTTYSimulatorSubscriptionContext : CTXPCServiceSubscriptionContext

@property (retain, nonatomic) NSUUID *testUuid;

- (void).cxx_destruct;
- (id)init;
- (id)uuid;

@end
