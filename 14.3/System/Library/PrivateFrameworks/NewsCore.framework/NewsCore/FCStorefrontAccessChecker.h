@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrivateChannelMembershipController:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;

@end
