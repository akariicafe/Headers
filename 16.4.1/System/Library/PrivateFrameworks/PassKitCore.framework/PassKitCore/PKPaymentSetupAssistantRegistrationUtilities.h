@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject

+ (void)preflightPaymentSetupProvisioningController:(id)a0 forSetupAssistant:(unsigned long long)a1 withCompletion:(id /* block */)a2;
+ (BOOL)setupAssistantNeedsToRun:(unsigned long long)a0 returningRequirements:(unsigned long long *)a1;

@end
