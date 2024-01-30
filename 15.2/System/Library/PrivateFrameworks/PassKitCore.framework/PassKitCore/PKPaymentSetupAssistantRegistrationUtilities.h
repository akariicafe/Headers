@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (BOOL)_phoneNeedsToRun:(unsigned long long *)a0;
+ (BOOL)_bridgeNeedsToRun:(unsigned long long *)a0;
+ (BOOL)_macNeedsToRun:(unsigned long long *)a0;
+ (void)preflightPaymentSetupProvisioningController:(id)a0 forSetupAssistant:(unsigned long long)a1 withCompletion:(id /* block */)a2;
+ (BOOL)setupAssistantNeedsToRun:(unsigned long long)a0 returningRequirements:(unsigned long long *)a1;

@end
