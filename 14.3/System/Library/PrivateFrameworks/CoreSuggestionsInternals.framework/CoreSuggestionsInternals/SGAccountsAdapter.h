@class NSSet, NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGAccountsAdapter : NSObject {
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)setCachedAccounts;
- (void)registerNotificationObserver;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)readCachedAccounts;
- (void)refreshCacheFromAccountsService;
- (id)serverIdentifierForAccount:(id)a0;
- (id)primaryICloudCalendarAccount;
- (void)accountsStoreDidChange:(id)a0;
- (BOOL)hasCalendarAccount:(id)a0;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)a0;
- (void)removeNotificationObserver;
- (void)cancelUpdateTimer;

@end
