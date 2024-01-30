@interface VSMultiAppInstallUtility : NSObject

+ (void)determineMultiAppEnabledForProvider:(id)a0 completion:(id /* block */)a1;
+ (void)determineMultiAppEnabledForProvider:(id)a0 withAccount:(id)a1 completion:(id /* block */)a2;
+ (void)determineMultiAppEnabledForProvider:(id)a0 withAccount:(id)a1 withBagLoadOperation:(id)a2 completion:(id /* block */)a3;
+ (void)filterBundleIDsByPendingConsent:(id)a0 completionHandler:(id /* block */)a1;
+ (id)getDecidedNonChannelAppsForProvider:(id)a0 account:(id)a1 device:(id)a2;
+ (void)getPendingConsentBundleIDsFromSelectedAppDescriptions:(id)a0 completionHandler:(id /* block */)a1;
+ (void)isShowMultiAppInstallForCaseAlwaysRequirePasswordEnabledWithBagLoadOperation:(id)a0 completion:(id /* block */)a1;

@end
