@class NSString, PKPeerPaymentAccount, PKPeerPaymentWebService, NPKCompanionAgentConnection, NPKPeerPaymentWebServiceCompanionTargetDevice, NPKPaymentWebServiceCompanionTargetDevice, PKPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>

@property (retain, nonatomic) PKPaymentWebService *webService;
@property (retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice;
@property (retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } companionAgentConnectionLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWebServiceProvider;

- (void)noteForegroundVerificationObserverActive:(BOOL)a0;
- (void)startBackgroundVerificationObserverForPass:(id)a0 verificationMethod:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_peerPaymentAccount;
- (void)setNewAuthRandom:(id /* block */)a0;
- (void)_deviceFailedToPair:(id)a0;
- (id)_peerPaymentWebServiceContext;
- (id)_webServiceContext;
- (void)archiveWebServiceBackgroundContext:(id)a0;
- (void)archiveWebServiceContext:(id)a0;
- (void)checkCompanionPeerPaymentRegistrationState;
- (void)handleAppletState:(id)a0 forUniqueID:(id)a1;
- (void)handleBalanceReminderUpdate:(id)a0 balance:(id)a1 forUniqueID:(id)a2;
- (void)handleBalanceUpdate:(id)a0 forUniqueID:(id)a1;
- (void)handleCredentialsUpdate:(id)a0 forUniqueID:(id)a1;
- (void)handleDownloadAllPaymentPasses;
- (void)handlePaymentTransactions:(id)a0 appletStates:(id)a1 forUniqueIDs:(id)a2;
- (void)handlePaymentWebServiceContextFromWatch:(id)a0;
- (void)handlePreconditionNotMetWithUniqueIDs:(id)a0 preconditionDescription:(id)a1 shouldUnregister:(BOOL)a2;
- (void)handlePreferredAID:(id)a0 forPassWithUniqueID:(id)a1;
- (void)handlePushToken:(id)a0;
- (void)handleRemoveTransactionsWithIdentifiers:(id)a0;
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)a0;
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)a0 account:(id)a1;
- (void)loadWebService;
- (void)sendPaymentOptionsDefaultsToWatch;
- (void)sendWebServiceContextToWatch;
- (void)showPaymentSetupForAppDisplayName:(id)a0;

@end
