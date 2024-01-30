@interface NPKSimulatedPaymentProvisioningFlowController : NPKPaymentProvisioningFlowController

+ (id)_broadwayCredential;
+ (id)_easyProvisioningCredentials;
+ (id)_passWithDescription:(id)a0 credentialType:(long long)a1;

- (void)_performTerms:(id)a0;
- (void)_performEligibility:(id)a0;
- (void)_performProvision:(id)a0;
- (void)_requestRequirements:(id)a0;
- (void)_startProvisioningForCredential:(id)a0 requestContext:(id)a1;
- (void)acknowledgeWelcome:(id)a0;
- (void)chooseFlowForPickerItem:(id)a0 requestContext:(id)a1;
- (void)handleManualEntryFields:(id)a0 credential:(id)a1 requestContext:(id)a2;
- (void)startProvisioningFlow:(id)a0;

@end
