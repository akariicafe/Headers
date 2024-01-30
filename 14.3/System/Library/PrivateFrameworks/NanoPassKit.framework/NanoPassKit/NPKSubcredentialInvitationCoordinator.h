@class NPKStandaloneFirstUnlockCoordinator, NPKWatchSubcredentialProvisioningService, PKPaymentService, NSString, PKSubcredentialProvisioningController, NSObject, PKAppletSubcredentialSharingSession;
@protocol OS_dispatch_queue;

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) PKPaymentService *paymentService;
@property (retain, nonatomic) PKSubcredentialProvisioningController *subcredentialProvisioningController;
@property (retain, nonatomic) PKAppletSubcredentialSharingSession *sharingSession;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator;
@property (retain, nonatomic) NPKWatchSubcredentialProvisioningService *subcredentialProvisioningService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canAddSecureElementPassWithConfiguration:(id)a0;
+ (BOOL)canAddSecureElementPass;

- (void)subcredentialProvisioningController:(id)a0 didFinishWithPass:(id)a1;
- (void)subcredentialProvisioningController:(id)a0 didFinishWithError:(id)a1;
- (void)registerCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)revokeCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_paymentWebService;
- (void)accountAttestationAnonymizationSaltWithCompletion:(id /* block */)a0;
- (id)initWithCallbackQueue:(id)a0;
- (id)_errorWithCode:(long long)a0 message:(id)a1;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)a0;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)a0 shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)a1 completion:(id /* block */)a2;
- (void)statusForSentInvitation:(id)a0 completion:(id /* block */)a1;
- (void)statusForReceivedInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_canAcceptInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_listSubcredentialInvitationsWithCompletion:(id /* block */)a0;
- (void)_setUpSubcredentialProvisioningController;
- (void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)a0;
- (void)_handleProvisioningAttemptForConfiguration:(id)a0 error:(id)a1;
- (void)_makeConfigurationForInvitation:(id)a0 session:(id)a1 metadata:(id)a2 paymentWebService:(id)a3 completion:(id /* block */)a4;
- (void)canAcceptInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_fetchInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_performBlockFollowingFirstUnlockWithBlock:(id /* block */)a0;
- (void)deviceContainsInvitationMatchingInvitation:(id)a0 withTimeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_queue_deviceContainsInvitationMatchingInvitation:(id)a0 withTimeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_queue_accountAttestationAnonymizationSaltWithCompletion:(id /* block */)a0;
- (void)_queue_setAccountAttestationAnonymizationSalt:(id)a0 completion:(id /* block */)a1;
- (void)_queue_requestSubcredentialInvitation:(id)a0 fromIDSHandle:(id)a1 completion:(id /* block */)a2;
- (void)_queue_updateSubcredentialMetadataOnPass:(id)a0 withCredential:(id)a1 completion:(id /* block */)a2;
- (void)_queue_registerCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_queue_revokeCredentialsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_queue_removeSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_declineRelatedInvitationsIfNecessaryForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id /* block */)a0;
- (void)startProvisioningWithInvitation:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)setAccountAttestationAnonymizationSalt:(id)a0 completion:(id /* block */)a1;
- (void)fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_queue_statusForSentInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_queue_statusForReceivedInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_endProvisioningWithPassForInvitation:(id)a0 error:(id)a1;
- (BOOL)_isInvitationUniqueForPairedReaderIdentifier:(id)a0;
- (void)_fetchInvitationMatchingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)listSubcredentialInvitationsWithCompletion:(id /* block */)a0;
- (void)_startProvisioningForProvisioningController:(id)a0 withConfiguration:(id)a1;
- (void)_invokeCompletionWithPassForInvitation:(id)a0 error:(id)a1;
- (void)startProvisioningWithInvitationIdentifier:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)requestSubcredentialInvitation:(id)a0 completion:(id /* block */)a1;
- (void)updateSubcredentialMetadataOnPass:(id)a0 withCredential:(id)a1 completion:(id /* block */)a2;
- (void)removeSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)declineRelatedInvitationsIfNecessaryForInvitation:(id)a0 completion:(id /* block */)a1;
- (BOOL)_deviceSupportsSubcredentialProvisioning;

@end
