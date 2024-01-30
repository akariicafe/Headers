@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (BOOL)_phoneNeedsToRun:(unsigned long long *)a0;
+ (BOOL)_macNeedsToRun:(unsigned long long *)a0;
+ (BOOL)_bridgeNeedsToRun:(unsigned long long *)a0;
+ (BOOL)_shouldCheckMacNeedsToRun;
+ (BOOL)_macNeedsToRun:(unsigned long long *)a0 secureElementOwnershipState:(unsigned long long)a1;
+ (void)_phonePreflight:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_bridgePreflight:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_macPreflight:(id)a0 withCompletion:(id /* block */)a1;
+ (id)_peerPaymentCredentialFromPeerPaymentWebService:(id)a0;
+ (void)_handlePreflightFinishedWithSuccess:(BOOL)a0 paymentCredentials:(id)a1 provisioningController:(id)a2 completion:(id /* block */)a3;
+ (id)_bridgeContextDefaultLocalCredential;
+ (BOOL)setupAssistantNeedsToRun:(unsigned long long)a0 returningRequirements:(unsigned long long *)a1;
+ (void)preflightPaymentSetupProvisioningController:(id)a0 forSetupAssistant:(unsigned long long)a1 withCompletion:(id /* block */)a2;
+ (id)retrieveLocalAppletSubcredentialPassCredentials;

@end
