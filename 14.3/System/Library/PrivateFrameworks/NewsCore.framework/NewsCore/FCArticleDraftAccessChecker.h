@class FCPrivateChannelMembershipController;

@interface FCArticleDraftAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (BOOL)shouldShowAllDraftContent;
- (id)init;
- (void).cxx_destruct;
- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithPrivateChannelMembershipController:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;

@end
