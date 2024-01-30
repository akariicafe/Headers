@interface PKPaymentRegistrationUtilities : NSObject

+ (void)configureWebServiceIfNecessary:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_isPaymentSetupSupportedForWebService:(id)a0;
+ (void)_shouldShowAddCardFlowForWebService:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowPasscodeAccessibilityOverride:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInSettings:(id)a0 completion:(id /* block */)a1;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInBuddy:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)a0 completion:(id /* block */)a1;

@end
