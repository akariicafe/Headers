@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (id)getCookiesForURL:(id)a0;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (void)saveCookies:(id)a0 forURL:(id)a1;
- (void)removeAllCookies;
- (void)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (void)dealloc;
- (id)getCookiesForUserIdentifier:(id)a0;
- (id)getCookieWithName:(id)a0 userIdentifier:(id)a1;
- (void)removeCookiesWithProperties:(id)a0;
- (void)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (id)init;
- (void)_saveCookies:(id)a0 userIdentifier:(id)a1;
- (id)_accountForUserIdentifier:(id)a0;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;

@end
