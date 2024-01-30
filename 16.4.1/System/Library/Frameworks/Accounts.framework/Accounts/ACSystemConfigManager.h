@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (id)sharedInstance;
+ (void)_tearDown;
+ (void)_scheduleSharedInstanceTeardown;
+ (unsigned long long)_timeoutInterval;
+ (id)_livingInstance;

- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void)_destroySCPreferencesSession;
- (void)dealloc;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;
- (void)_setValue:(void *)a0 forKey:(id)a1;
- (id)init;
- (void *)_getValueForKey:(id)a0;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void)_createSCPreferencesSession;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (void).cxx_destruct;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;

@end
