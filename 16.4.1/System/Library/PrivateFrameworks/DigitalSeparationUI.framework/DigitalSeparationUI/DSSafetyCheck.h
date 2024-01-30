@interface DSSafetyCheck : NSObject

+ (BOOL)isManagedAccount;
+ (void)authForSafetyCheckWithPresentingViewController:(id)a0 safetyCheckController:(id)a1;
+ (void)isChildOrTeenAccountWithCompletion:(id /* block */)a0;
+ (id)safetyCheckViewController;
+ (BOOL)shouldShowHSA2Upgrade;
+ (void)showChildAccountFlowWithPresentingViewController:(id)a0;
+ (void)showHSA2UpgradeWithPresentingViewController:(id)a0 safetyCheckController:(id)a1;
+ (void)showManagedAccountAlertWithPresentingViewController:(id)a0;
+ (void)showlearnMoreForPresentingViewController:(id)a0 withURL:(id)a1;
+ (void)startEmergencyResetWithPresentingViewController:(id)a0;
+ (void)startManageSharingWithPresentingViewController:(id)a0;
+ (void)startSafetyCheckWithPresentingViewController:(id)a0 safetyCheckController:(id)a1;

@end
