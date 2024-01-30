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

- (void)deleteApplePayTrustKeyWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)a0;
- (void)noteProvisioningDidBegin;
- (void)updatedAccountsForProvisioningWithCompletion:(id /* block */)a0;
- (void)applePayTrustKeyForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)a0 withCompletion:(id /* block */)a1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (id)init;
- (void).cxx_destruct;
- (void)passOwnershipTokenWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)downloadAllPaymentPasses;
- (void)storePassOwnershipToken:(id)a0 withIdentifier:(id)a1;
- (void)dealloc;
- (void)createApplePayTrustKeyWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)a0;
- (void)featureApplicationsForProvisioningWithCompletion:(id /* block */)a0;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)a0;
- (void)archiveContext:(id)a0;
- (void)familyMembersWithCompletion:(id /* block */)a0;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)setNewAuthRandom:(id /* block */)a0;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)getConfigurationDataWithCompletion:(id /* block */)a0;
- (void)getRegistrationDataWithCompletion:(id /* block */)a0;
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(id /* block */)a0;
- (void)signData:(id)a0 signatureEntanglementMode:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)getProvisioningDataIncludingDeviceMetadata:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)didRegisterWithRegionMap:(id)a0 primaryRegionTopic:(id)a1;
- (void)paymentSupportedInCurrentRegion:(id /* block */)a0;
- (void)hasPassesOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)registrationSupportedInCurrentRegionWithCompletion:(id /* block */)a0;
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(id /* block */)a0;
- (void)passesOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)addPassData:(id)a0 completion:(id /* block */)a1;
- (void)validateAddPreconditionsWithCompletion:(id /* block */)a0;
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(id /* block */)a0;
- (void)validateTransferPreconditionsWithCompletion:(id /* block */)a0;
- (void)handlePotentialExpressPass:(id)a0 withCompletion:(id /* block */)a1;
- (void)removePass:(id)a0 completion:(id /* block */)a1;
- (void)supportsPeerPaymentRegistrationWithCompletion:(id /* block */)a0;
- (void)appleAccountInformationWithCompletion:(id /* block */)a0;
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)a0 completion:(id /* block */)a1;
- (void)updateAccountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)supportsAccountsWithCompletion:(id /* block */)a0;
- (void)supportedFeatureIdentifiersWithCompletion:(id /* block */)a0;
- (void)deviceMetadataWithFields:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(id /* block */)a0;
- (void)invalidateRemoteProxyTargetDevice;
- (id)initWithWebService:(id)a0 connection:(id)a1;
- (void)claimSecureElementForCurrentUserWithCompletion:(id /* block */)a0;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(id /* block */)a0;
- (void)deleteApplicationWithAID:(id)a0;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningDidEnd;
- (void)archiveBackgroundContext:(id)a0;
- (void)performDeviceCheckInWithCompletion:(id /* block */)a0;

@end
