@class NSString, PKXPCService;

@interface NPKNanoPassDaemonConnection : NSObject <PKXPCServiceDelegate>

@property (retain, nonatomic) PKXPCService *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)remoteServiceDidSuspend:(id)a0;
- (void)remoteServiceDidResume:(id)a0;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)a0;
- (id)_remoteObjectProxySynchronous:(BOOL)a0 withFailureHandler:(id /* block */)a1;
- (void)addUserNotificationOfType:(unsigned long long)a0 passUniqueID:(id)a1 completion:(id /* block */)a2;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(id)a0 transaction:(id)a1;
- (void)handleMetadataRequestOnPairedDevice:(id)a0 withAssociatedApplicationIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)identityPassPrearmStatusSynchronous:(BOOL)a0 completion:(id /* block */)a1;
- (void)noteWillDeleteAccountsSynchronous:(BOOL)a0 completion:(id /* block */)a1;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)a0 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)a0;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)a0 activationCode:(id)a1;

@end
