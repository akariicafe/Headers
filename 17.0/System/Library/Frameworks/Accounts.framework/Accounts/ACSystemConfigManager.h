@class NSObject;
@protocol OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
    NSObject<OS_dispatch_queue> *_preferencesQueue;
    struct __SCPreferences { } *_preferencesSession;
    int _applySkipCount;
}

+ (unsigned long long)_timeoutInterval;
+ (id)sharedInstance;
+ (void)_tearDown;
+ (id)_livingInstance;
+ (void)_scheduleSharedInstanceTeardown;

- (id)init;
- (int)accountsWithAccountTypeIdentifierExist:(id)a0;
- (void)dealloc;
- (void)_createSCPreferencesSession;
- (void *)_getValueForKey:(id)a0;
- (void)_destroySCPreferencesSession;
- (long long)countOfAccountsWithAccountTypeIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_setValue:(void *)a0 forKey:(id)a1;
- (void)_handleSCPreferencesSessionNotification:(unsigned int)a0;
- (void)setAccountsWithAccountTypeIdentifier:(id)a0 exist:(BOOL)a1;
- (void)setCountOfAccounts:(long long)a0 withAccountTypeIdentifier:(id)a1;

@end
