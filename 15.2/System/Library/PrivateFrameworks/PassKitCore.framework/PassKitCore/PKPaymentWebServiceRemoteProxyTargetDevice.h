@class NSString, NSXPCConnection, NSObject, PKPaymentWebService;
@protocol OS_dispatch_queue, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRemoteProxyTargetDevice : NSObject <PKPaymentWebServiceProxyObjectExportedInterface> {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    PKPaymentWebService *_webService;
    id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureApplicationsForProvisioningWithCompletion:(id /* block */)a0;
- (void)paymentSupportedInCurrentRegion:(id /* block */)a0;
- (void)registrationSupportedInCurrentRegionWithCompletion:(id /* block */)a0;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningDidEnd;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)a0;
- (void)hasPassesOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)passesOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)validateAddPreconditionsWithCompletion:(id /* block */)a0;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* block */)a0;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(id /* block */)a0;
- (void)downloadAllPaymentPasses;
- (void)performDeviceCheckInWithCompletion:(id /* block */)a0;
- (void)validateTransferPreconditionsWithCompletion:(id /* block */)a0;
- (void)handlePotentialExpressPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)addPassData:(id)a0 completion:(id /* block */)a1;
- (void)removePass:(id)a0 completion:(id /* block */)a1;
- (void)appleAccountInformationWithCompletion:(id /* block */)a0;
- (void)supportsPeerPaymentRegistrationWithCompletion:(id /* block */)a0;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)a0 completion:(id /* block */)a1;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id /* block */)a0;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)a0;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)updateAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)supportsAccountsWithCompletion:(id /* block */)a0;
- (void)supportedFeatureIdentifiersWithCompletion:(id /* block */)a0;
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(id /* block */)a0;
- (BOOL)areUnifiedAccessPassesSupported;
- (void)updatedAccountsForProvisioningWithCompletion:(id /* block */)a0;
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(id /* block */)a0;
- (void)deviceMetadataWithFields:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)invalidateRemoteProxyTargetDevice;
- (void)applePayTrustKeyForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)createApplePayTrustKeyWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)passOwnershipTokenWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 completion:(id /* block */)a2;
- (void)deleteKeyMaterialForSubCredentialId:(id)a0;
- (id)initWithWebService:(id)a0 connection:(id)a1;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)familyMembersWithCompletion:(id /* block */)a0;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)a0;
- (void)archiveContext:(id)a0;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)archiveBackgroundContext:(id)a0;
- (id)init;
- (void)storePassOwnershipToken:(id)a0 withIdentifier:(id)a1;
- (void)addISO18013Blobs:(id)a0 cardType:(long long)a1 completion:(id /* block */)a2;
- (void)deleteApplicationWithAID:(id)a0;
- (void)provisionHomeKeyPassForSerialNumbers:(id)a0 completionHandler:(id /* block */)a1;
- (void)createFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 challenge:(id)a2 externalizedAuth:(id)a3 completion:(id /* block */)a4;
- (void)checkFidoKeyPresenceForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 completion:(id /* block */)a3;
- (void)availableHomeKeyPassesWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)generateISOEncryptionCertificateForSubCredentialId:(id)a0 completion:(id /* block */)a1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)a0 withCompletion:(id /* block */)a1;
- (void)signWithFidoKeyForRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 challenge:(id)a3 publicKeyIdentifier:(id)a4 externalizedAuth:(id)a5 completion:(id /* block */)a6;
- (void)generateTransactionKeyWithParameters:(id)a0 withCompletion:(id /* block */)a1;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)getConfigurationDataWithCompletion:(id /* block */)a0;
- (void)getRegistrationDataWithCompletion:(id /* block */)a0;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(id /* block */)a0;
- (void)noteProvisioningDidBegin;
- (void)signData:(id)a0 signatureEntanglementMode:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)getProvisioningDataIncludingDeviceMetadata:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)didRegisterWithRegionMap:(id)a0 primaryRegionTopic:(id)a1;
- (void)setNewAuthRandom:(id /* block */)a0;

@end
