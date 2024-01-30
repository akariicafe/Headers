@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)initWithPrivateChannelMembershipController:(id)a0;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
