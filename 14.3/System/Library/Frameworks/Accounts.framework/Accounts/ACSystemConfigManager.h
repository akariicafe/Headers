@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (void)_tearDown;
+ (unsigned long long)_timeoutInterval;
+ (void)_scheduleSharedInstanceTeardown;
+ (id)_livingInstance;

- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (id)init;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_destroySCPreferencesSession;
- (void)_setValue:(void *)a0 forKey:(id)a1;
- (void)_createSCPreferencesSession;
- (void *)_getValueForKey:(id)a0;

@end
