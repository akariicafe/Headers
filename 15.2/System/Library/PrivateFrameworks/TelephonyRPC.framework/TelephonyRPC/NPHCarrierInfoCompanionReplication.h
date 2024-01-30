@class NSUserDefaults, NPSManager;

@interface NPHCarrierInfoCompanionReplication : NSObject

@property (readonly, nonatomic) NSUserDefaults *mobilePhoneUserDefaults;
@property (readonly, nonatomic) NSUserDefaults *nanoPhoneUserDefaults;
@property (readonly, nonatomic) NPSManager *npsManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_visualVMSubscriptionStateStatusChanged:(id)a0;
- (void)_vmAccountsDidChange:(id)a0;
- (void)_updateShouldHideVoicemailUI;
- (void)_updateIsVisualVoicemailServiceSubscribed;

@end
