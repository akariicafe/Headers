@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)acceptInvitation;

@end
