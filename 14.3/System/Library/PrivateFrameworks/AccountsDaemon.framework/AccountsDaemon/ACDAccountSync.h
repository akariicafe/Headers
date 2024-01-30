@class NSTimer, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
    int _circleToken;
    int _keychainToken;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_syncQueue;
    BOOL _enabled;
    BOOL _duchessEnabled;
    ACAccountStore *_store;
}

+ (id)sharedAccountSyncServer;
+ (id)accountSyncUnsupportedTypes;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncPropertiesForAccount:(id)a0;
+ (id)duchessHostnames;

- (void)sync;
- (BOOL)unsupportedType:(id)a0;
- (void)queueSync;
- (void)registerForNotifications;
- (void)accountChanges:(id)a0;
- (id)init;
- (BOOL)isDataclassActionRequired:(id)a0;
- (BOOL)isMigrated;
- (void).cxx_destruct;
- (void)markMigrated;
- (void)kvsChanges:(id)a0;
- (id)remoteAccounts;
- (id)processHostnameAdds;
- (void)dealloc;
- (id)getiOSVersion;
- (void)scheduleSync;
- (void)createAccounts:(id)a0;
- (void)devices;
- (BOOL)migrate;
- (id)remoteHostnameAccounts;
- (void)setupAccountSync;
- (void)createKeychainItems:(id)a0;
- (BOOL)locallyMigrated;
- (void)setiOSVersion;
- (id)localAccounts;
- (BOOL)checkCircleState;
- (id)primaryiCloudAccount;
- (BOOL)detectDuchess;
- (void)waitForBuddy;
- (id)processAdds;
- (id)processHostnameDeletes;
- (id)accountPropertiesFromDictionary:(id)a0 forType:(id)a1;
- (id)processDeletes;
- (id)localHostnameAccounts;
- (id)getAccountsOfType:(id)a0;
- (void)fixLDAP;
- (id)smtpAccounts;
- (BOOL)supportedType:(id)a0;
- (void)fixSMTP;
- (void)postNotificationFor:(id)a0;
- (void)deleteAccounts:(id)a0;
- (id)ldapAccounts;

@end
