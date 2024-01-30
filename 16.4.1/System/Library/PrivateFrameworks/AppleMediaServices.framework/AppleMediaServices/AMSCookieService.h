@class NSCache, NSString;

@interface AMSCookieService : NSObject <NSCacheDelegate, AMSCookieServiceInterface>

@property (class, readonly, nonatomic) AMSCookieService *sharedService;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inMemoryStorageLock;
@property (readonly) NSCache *inMemoryStorage;
@property BOOL isObservingNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isEntitledForDirectCookieAccess;

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)getCookiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)_cachedCookiesForAccount:(id)a0;
- (void)updateCookiesWithCookiesToAdd:(id)a0 cookiesToRemove:(id)a1 forAccount:(id)a2 withCompletion:(id /* block */)a3;
- (void)clearCookieCache;
- (void)_cacheCookies:(id)a0 forAccount:(id)a1;
- (void)clearCookieCacheForAccount:(id)a0;
- (id)init;
- (void)_registerForCookieChangeNotifications;
- (id)getCookiesForAccount:(id)a0 cookieDatabaseOnly:(BOOL)a1 error:(id *)a2;
- (void)_unregisterFromCookieChangeNotifications;
- (id)getCookiesForAccount:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)getCookiesForAccount:(id)a0 withCompletion:(id /* block */)a1;

@end
