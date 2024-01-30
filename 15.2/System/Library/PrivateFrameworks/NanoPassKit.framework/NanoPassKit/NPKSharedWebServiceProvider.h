@class NSString, PKPeerPaymentAccount, PKPeerPaymentWebService, NPKCompanionAgentConnection, NPKPeerPaymentWebServiceCompanionTargetDevice, NPKPaymentWebServiceCompanionTargetDevice, PKPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>

@property (retain, nonatomic) PKPaymentWebService *webService;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice;
@property (retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWebServiceProvider;

- (void)noteForegroundVerificationObserverActive:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_peerPaymentAccount;
- (void)startBackgroundVerificationObserverForPass:(id)a0 verificationMethod:(id)a1;
- (void)setNewAuthRandom:(id /* block */)a0;
- (id)_webServiceContext;
- (id)_peerPaymentWebServiceContext;
- (void)_deviceFailedToPair:(id)a0;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)a0 preconditionDescription:(id)a1 shouldUnregister:(BOOL)a2;
- (void)handlePushToken:(id)a0;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)a0;
- (void)handlePreferredAID:(id)a0 forPassWithUniqueID:(id)a1;
- (void)handlePaymentTransactions:(id)a0 appletStates:(id)a1 forUniqueIDs:(id)a2;
- (void)handleAppletState:(id)a0 forUniqueID:(id)a1;
- (void)handleRemoveTransactionsWithIdentifiers:(id)a0;
- (void)handleBalanceUpdate:(id)a0 forUniqueID:(id)a1;
- (void)handleBalanceReminderUpdate:(id)a0 balance:(id)a1 forUniqueID:(id)a2;
- (void)handleCredentialsUpdate:(id)a0 forUniqueID:(id)a1;
- (void)archiveWebServiceContext:(id)a0;
- (void)archiveWebServiceBackgroundContext:(id)a0;
- (void)handlePaymentWebServiceContextFromWatch:(id)a0;
- (void)sendWebServiceContextToWatch;
- (void)showPaymentSetupForAppDisplayName:(id)a0;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)a0 account:(id)a1;
- (void)handleDownloadAllPaymentPasses;
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)loadWebService;

@end
