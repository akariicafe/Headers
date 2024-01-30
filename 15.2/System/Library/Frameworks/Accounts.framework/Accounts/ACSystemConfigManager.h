@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (void)_tearDown;
+ (id)sharedInstance;
+ (unsigned long long)_timeoutInterval;
+ (id)_livingInstance;
+ (void)_scheduleSharedInstanceTeardown;

- (void)_setValue:(void *)a0 forKey:(id)a1;
- (void)_destroySCPreferencesSession;
- (void *)_getValueForKey:(id)a0;
- (void)_createSCPreferencesSession;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;

@end
