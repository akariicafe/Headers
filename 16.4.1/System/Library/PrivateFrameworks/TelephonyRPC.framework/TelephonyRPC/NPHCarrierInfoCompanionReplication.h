@class NSUserDefaults, NPSManager;

@interface NPHCarrierInfoCompanionReplication : NSObject

@property (readonly, nonatomic) NSUserDefaults *mobilePhoneUserDefaults;
@property (readonly, nonatomic) NSUserDefaults *nanoPhoneUserDefaults;
@property (readonly, nonatomic) NPSManager *npsManager;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateIsVisualVoicemailServiceSubscribed;
- (void)_visualVMSubscriptionStateStatusChanged:(id)a0;

@end
