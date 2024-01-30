@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithPrivateChannelMembershipController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
