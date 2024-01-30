@class NSUserDefaults, _ATXGlobals, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (id)disabledBundleIds;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (void)_listenForUpdates;
- (void)_performMigrationsIfNeeded;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)_updateBlacklist;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)_resetBlacklistWithSet:(id)a0;

@end
