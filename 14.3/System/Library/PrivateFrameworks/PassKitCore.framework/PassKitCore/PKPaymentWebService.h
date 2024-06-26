@class NSHashTable, NSString, NSArray, NSURLSession, PKPaymentWebServiceContext, NSURL, PKPaymentWebServiceBackgroundContext, NSMutableDictionary, NSObject, NSOperationQueue, PKPaymentDevice;
@protocol PKPaymentWebServiceArchiver, PKPaymentWebServiceTargetDeviceProtocol, OS_dispatch_queue, PKPaymentWebServiceBackgroundDelegate;

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate> {
    NSURLSession *_backgroundSession;
    PKPaymentDevice *_paymentDevice;
    NSMutableDictionary *_passesByLocalURL;
    int _paymentSupportInRegion;
    int _registrationSupportInRegion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _supportInRegionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;
    NSOperationQueue *_backgroundSessionDelegateQueue;
    NSHashTable *_delegates;
    PKPaymentWebServiceContext *_context;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextLock;
    BOOL _handlingApplePayTrustReRegister;
}

@property (nonatomic) BOOL sharedService;
@property (retain, nonatomic) PKPaymentWebServiceContext *context;
@property (retain) PKPaymentWebServiceBackgroundContext *backgroundContext;
@property (readonly) BOOL needsRegistration;
@property (readonly) NSURL *primaryBrokerURL;
@property (readonly) BOOL needsConfiguration;
@property (readonly) int paymentSetupSupportedInRegion;
@property (readonly) BOOL registrationSetupSupportedInRegion;
@property (readonly) NSArray *delegates;
@property (retain) id<PKPaymentWebServiceArchiver> archiver;
@property (weak) id<PKPaymentWebServiceBackgroundDelegate> backgroundDelegate;
@property (readonly, nonatomic) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (BOOL)supportsSecureCoding;

- (id)_appleAccountInformation;
- (void)_archiveContext;
- (void)removeDelegate:(id)a0;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 archiver:(id)a2 tapToRadarDelegate:(id)a3;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 archiver:(id)a2;
- (void)handleResponse:(id)a0 withError:(id)a1 data:(id)a2 task:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithContext:(id)a0 targetDevice:(id)a1 tapToRadarDelegate:(id)a2;
- (void)_deviceRegistrationDataWithCompletion:(id /* block */)a0;
- (BOOL)_isValidResponse:(id)a0 error:(id)a1;
- (void)_handleRetryAfterRegisterWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)applePayTrustSignatureRequestWithRequest:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_updateRequestWithCurrentTargetDevice:(id)a0;
- (unsigned long long)registerCredentialWithRequest:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)_performAccountRequest:(id)a0 account:(id)a1 taskID:(unsigned long long)a2 responseClass:(Class)a3 completion:(id /* block */)a4;
- (void)addDelegate:(id)a0;
- (unsigned long long)paymentsWithRequest:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_addVerificationRequestRecord:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (unsigned long long)passActionWithRemoteContentPassAction:(id)a0 forPass:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)completeSessionWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isSandboxAccount;
- (id)_fakeVerificationChannelsWithRealChannels:(id)a0;
- (unsigned long long)transactionReceiptAuthorizationWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)configurePaymentServiceWithCompletion:(id /* block */)a0;
- (unsigned long long)_performApplePayTrustRegistrationWithURL:(id)a0 pushToken:(id)a1 completion:(id /* block */)a2;
- (void)_handleRemoteURLAssetDownloadTask:(id)a0 data:(id)a1;
- (unsigned long long)addFundingSourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_augmentSessionWithRequest:(id)a0 serviceURL:(id)a1 completion:(id /* block */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (unsigned long long)accountTransactionAnswerWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)signNonce:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)serviceProviderPurchaseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)invalidateBackgroundSession;
- (unsigned long long)rewrapInAppPaymentWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)verificationRecordForPass:(id)a0;
- (void)_handleRemoteAssetDownloadForManifestItem:(id)a0 taskPassURL:(id)a1 data:(id)a2 shouldWriteData:(BOOL)a3;
- (unsigned long long)accountWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)provisioningMethodWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)performProductActionRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)issuerProvisioningCertificatesForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)fetchBarcodesWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)schedulePaymentWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_deviceConfigurationDataWithCompletion:(id /* block */)a0;
- (void)_storePassOwnershipToken:(id)a0 withIdentifier:(id)a1;
- (void)_handleRetryAfterApplePayTrustEnrollmentWithOriginalRequest:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)browseableBankAppsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_backgroundDownloadCloudStoreAssetsforItem:(id)a0 cloudStoreCoordinatorDelegate:(id)a1;
- (void)dealloc;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)a0 originalRequest:(id)a1 redirectHandler:(id /* block */)a2;
- (void)_recentConfiguration:(id /* block */)a0;
- (unsigned long long)notifyIssuerAppletStateDirtyWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)passesWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_performRewrapRequest:(id)a0 responseHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)_downloadCacheLocation;
- (unsigned long long)deprovisionForRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)augmentSessionWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_resultForUnexpectedStatusCode:(long long)a0;
- (unsigned long long)transactionReceiptWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)passWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_resultForResponse:(id)a0 error:(id)a1 successHandler:(id /* block */)a2;
- (void)getHasBackgroundDownloadTaskPassesForPushTopic:(id)a0 completion:(id /* block */)a1;
- (id)logFacility;
- (void)backgroundDownloadRemotePassAssets:(id)a0;
- (unsigned long long)verificationChannelsForPass:(id)a0 completion:(id /* block */)a1;
- (void)backgroundDownloadPassesForPushTopic:(id)a0 sinceLastUpdatedTag:(BOOL)a1;
- (unsigned long long)performInstallmentBindWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)performServiceProviderPayment:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupPassDownloadCache;
- (unsigned long long)accountTermsDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)accountBankLookupWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)availableProductsWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)isChinaRegionIdentifier:(id)a0;
- (unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)a0 completion:(id /* block */)a1;
- (void)sharedPaymentServiceAccountChanged:(id)a0;
- (unsigned long long)applePayTrustSignatureRequestWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)backgroundDownloadRemotePassAssets:(id)a0 cloudStoreCoordinatorDelegate:(id)a1;
- (unsigned long long)_nonceWithRequest:(id)a0 serviceURL:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)customizePhysicalCardWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)accountUserInfoWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)accountUpdateUserInfoWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)pushProvisioningSharingStatusRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)backgroundDownloadRemotePassAssets:(id)a0 forSuffixesAndScreenScales:(id)a1 cloudStoreCoordinatorDelegate:(id)a2;
- (unsigned long long)performAction:(id)a0 onServiceProviderPurchase:(id)a1 completion:(id /* block */)a2;
- (BOOL)_canRegisterForPeerPayment;
- (unsigned long long)accountPassDetailsRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)provisionRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)virtualCardActionWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)remotePaymentCredentialsForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handlePassListDownloadTask:(id)a0 data:(id)a1;
- (unsigned long long)exportTransactionDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)shownTermsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_passWithFileURL:(id)a0;
- (unsigned long long)_performOptionalAccountApplePayTrustProtocolRequest:(id)a0 originalRequest:(id)a1 taskID:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_createApplePayTrustKeyWithCompletion:(id /* block */)a0;
- (unsigned long long)provideEncryptedPushProvisioningTargetWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)backgroundDownloadWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1;
- (unsigned long long)provisionForRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)rewrapInAppPayment:(id)a0 merchantIdentifier:(id)a1 merchantSession:(id)a2 hostApplicationIdentifier:(id)a3 applicationData:(id)a4 pass:(id)a5 paymentApplication:(id)a6 completion:(id /* block */)a7;
- (unsigned long long)accountStatementActionWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)_supportsAccounts;
- (unsigned long long)accountStatementsWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)devicePassesSinceLastUpdatedTag:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)_hasConfiguration;
- (unsigned long long)accountTermsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)sharedPaymentServiceChanged:(id)a0;
- (unsigned long long)revokeSharedCredentialWithRequest:(id)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)updateRegistrationDataAtBrokerURL:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_updateContextWithRegistrationResponse:(id)a0;
- (unsigned long long)eligibilityForRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthenticationFailureWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)_performApplyRequest:(id)a0 responseClass:(Class)a1 completion:(id /* block */)a2;
- (unsigned long long)registerDeviceWithCompletion:(id /* block */)a0;
- (unsigned long long)registerAuxiliaryCapabilityWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)featureTermsDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)prepareTransactionDetailsForMerchantSession:(id)a0 secureElementIdentifier:(id)a1 amount:(id)a2 currencyCode:(id)a3 completion:(id /* block */)a4;
- (void)_handleDeviceCheckInTask:(id)a0 downloadRecord:(id)a1 data:(id)a2;
- (void)_startBackgroundURLSessionWithIdentifier:(id)a0 context:(id)a1 backgroundDelegate:(id)a2 completion:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_archiveBackgroundContext;
- (id)initWithTapToRadarDelegate:(id)a0;
- (void)_regionChanged;
- (unsigned long long)contactInformationWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)rewrapInAppPayment:(id)a0 merchantIdentifier:(id)a1 hostApplicationIdentifier:(id)a2 applicationData:(id)a3 pass:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)updateVerification:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_performAccountRequest:(id)a0 responseClass:(Class)a1 completion:(id /* block */)a2;
- (unsigned long long)serviceProviderNonceWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)registerDeviceAtBrokerURL:(id)a0 withConsistencyCheckResults:(id)a1 retries:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)serviceProviderPurchasesWithRequest:(id)a0 inRegion:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)virtualCardLegacyCredentialsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)backgroundDownloadPassAtURL:(id)a0;
- (unsigned long long)requestVerificationCodeForPass:(id)a0 usingChannel:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)networkManifestWithCompletion:(id /* block */)a0;
- (unsigned long long)registerDeviceAtBrokerURL:(id)a0 consistencyCheckResults:(id)a1 completion:(id /* block */)a2;
- (void)_deviceProvisioningDataIncludingDeviceMetadata:(BOOL)a0 withCompletion:(id /* block */)a1;
- (unsigned long long)serviceProviderAugmentSessionWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)checkMerchantStatus:(id)a0 forDomain:(id)a1 withCompletion:(id /* block */)a2;
- (unsigned long long)accountActionWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)termsDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)completeSession:(id)a0 wrappedPayment:(id)a1 pass:(id)a2 applicationData:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)fundingSourcesWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_applePayTrustPublicKeyHashWithCompletion:(id /* block */)a0;
- (unsigned long long)passUpgradeWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_removeVerificationRequestRecord:(id)a0;
- (unsigned long long)unregisterDeviceWithCompletion:(id /* block */)a0;
- (unsigned long long)submitDocumentsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_passOwnershipTokenForPaymentCredential:(id)a0 completion:(id /* block */)a1;
- (void)startBackgroundURLSessionWithIdentifier:(id)a0 context:(id)a1 backgroundDelegate:(id)a2;
- (unsigned long long)availableDevicesWithCompletion:(id /* block */)a0;
- (void)backgroundDownloadRemotePassAssets:(id)a0 forSuffixesAndScreenScales:(id)a1;
- (void)_handleRetryAfterTSMSyncForPushTopic:(id)a0 withRequest:(id)a1 taskIdentifier:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)applicationsWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)canBypassTrustExtendedValidation;
- (unsigned long long)cancelPaymentWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handlePassDownloadTask:(id)a0 data:(id)a1;
- (unsigned long long)_performAccountRequest:(id)a0 taskID:(unsigned long long)a1 responseClass:(Class)a2 completion:(id /* block */)a3;
- (unsigned long long)performApplePayTrustRegistrationWithCompletion:(id /* block */)a0;
- (void)_shouldPerformApplePayTrustRegistrationWithCompletion:(id /* block */)a0;
- (void)backgroundRegisterCredentialWithRequest:(id)a0;
- (unsigned long long)credentialAccountAttesationWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_downloadPassAtURL:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_performAccountApplePayTrustProtocolRequest:(id)a0 originalRequest:(id)a1 taskID:(unsigned long long)a2 completion:(id /* block */)a3;
- (unsigned long long)inAppPaymentNonceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_resetSupportInRegionCache;
- (void)startBackgroundURLSessionWithIdentifier:(id)a0 context:(id)a1 backgroundDelegate:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)verificationOptionsForRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)inAppPaymentNonceForPass:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)cardInfoForMerchantIdentifier:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)paymentProvisioningNonceOfType:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)performInstallmentAuthorizationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_paymentDevice;
- (void)_canRegisterForPeerPaymentWithCompletion:(id /* block */)a0;
- (unsigned long long)accountServiceCertificatesWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_passWithData:(id)a0 response:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)discoveryBundleForURL:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)createVirtualCardWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)requestPhysicalCardWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)submitVerificationCode:(id)a0 verificationData:(id)a1 forPass:(id)a2 completion:(id /* block */)a3;
- (BOOL)_needsRegistrationShouldCheckSecureElementOwnership:(BOOL)a0;
- (unsigned long long)deviceCheckInDeviceCheckInForRegion:(id)a0 completion:(id /* block */)a1;
- (id)_downloadPassesWithURLs:(id)a0;
- (unsigned long long)passAtURL:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)deleteApplicationWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)discoveryManifestWithCompletion:(id /* block */)a0;
- (unsigned long long)submitTermsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)processRetryRequest:(id)a0 responseData:(id)a1 orginalRequest:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)accountsWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)pushProvisioningSharingIdentifiersWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)deleteFundingSourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)moreInfoItemAtURL:(id)a0 withMetadata:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)deleteAccountWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)performNotificationActionRequest:(id)a0 completion:(id /* block */)a1;
- (id)_movePassToDownloadCache:(id)a0;
- (unsigned long long)virtualCardListWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)applyWithRequest:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_performAccountRequest:(id)a0 account:(id)a1 responseClass:(Class)a2 completion:(id /* block */)a3;
- (unsigned long long)createWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)backgroundPerformDeviceCheckInForRegion:(id)a0 identifier:(id)a1;
- (id)forbiddenErrorWithResponse:(id)a0;
- (unsigned long long)physicalCardActionWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)a0;
- (unsigned long long)requirementsForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_performVerificationRequest:(id)a0 selectedChannel:(id)a1 paymentPass:(id)a2 taskID:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_errorWithResult:(unsigned long long)a0 data:(id)a1;
- (void)_handleRemoteCloudStoreAssetForRecordName:(id)a0 taskRecord:(id)a1 data:(id)a2 shouldWriteData:(BOOL)a3;

@end
