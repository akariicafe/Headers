@interface PKWalletVisibility : NSObject

+ (void)isWalletPrefPaneVisibleWithCompletion:(id /* block */)a0;
+ (BOOL)isWalletRestricted;
+ (void)updateWalletVisibility;
+ (BOOL)isWalletVisible;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)isWalletPreferencesAndPaymentSetupAvailableWithWebService:(id)a0 completion:(id /* block */)a1;

@end
