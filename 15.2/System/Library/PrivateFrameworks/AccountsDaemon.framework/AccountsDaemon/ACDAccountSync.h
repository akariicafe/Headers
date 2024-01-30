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

- (BOOL)migrate;
- (void)sync;
- (void)fixLDAP;
- (BOOL)detectDuchess;
- (id)getAccountsOfType:(id)a0;
- (void)scheduleSync;
- (id)getiOSVersion;
- (BOOL)supportedType:(id)a0;
- (id)accountPropertiesFromDictionary:(id)a0 forType:(id)a1;
- (void)markMigrated;
- (void)queueSync;
- (id)localAccounts;
- (void)createKeychainItems:(id)a0;
- (id)primaryiCloudAccount;
- (void)waitForBuddy;
- (void)devices;
- (void)deleteAccounts:(id)a0;
- (id)remoteAccounts;
- (BOOL)locallyMigrated;
- (void)accountChanges:(id)a0;
- (void)fixSMTP;
- (BOOL)isDataclassActionRequired:(id)a0;
- (id)remoteHostnameAccounts;
- (void)kvsChanges:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMigrated;
- (id)init;
- (id)ldapAccounts;
- (void)setiOSVersion;
- (BOOL)unsupportedType:(id)a0;
- (void)postNotificationFor:(id)a0;
- (id)processAdds;
- (id)processHostnameAdds;
- (id)smtpAccounts;
- (void)setupAccountSync;
- (void)registerForNotifications;
- (BOOL)checkCircleState;
- (id)processHostnameDeletes;
- (void)dealloc;
- (void)createAccounts:(id)a0;
- (id)processDeletes;
- (id)localHostnameAccounts;

@end
