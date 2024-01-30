@protocol PKPassSnapshotCoordinatorProtocol, PKPaymentSetupAssistantProvisioningContextDelegate;

@interface PKPaymentSetupAssistantProvisioningContext : PKPaymentSetupAssistantCoreProvisioningContext

@property (retain, nonatomic) id<PKPassSnapshotCoordinatorProtocol> snapshotCoordinator;
@property (retain, nonatomic) id<PKPaymentSetupAssistantProvisioningContextDelegate> delegate;

- (void).cxx_destruct;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (id)_setupAssistantCredentialForPaymentCredential:(id)a0;
- (id)initWithProvisioningController:(id)a0 snapshotCoordinator:(id)a1 setupAssistantCredentials:(id)a2 maximumSelectable:(unsigned long long)a3;
- (id)passSnapshotForCredential:(id)a0;
- (id)setupAssistantCredentials;

@end
