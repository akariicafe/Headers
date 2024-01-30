@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)_handleShareAcceptResultCredential:(id)a0 pass:(id)a1 error:(id)a2;
- (void)acceptCrossPlatformInvitation;
- (void)acceptIDSInvitation;

@end
