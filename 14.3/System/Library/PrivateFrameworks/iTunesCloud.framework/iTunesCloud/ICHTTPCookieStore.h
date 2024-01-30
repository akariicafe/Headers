@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) ICHTTPCookieStore *sharedCookieStore;

- (id)getCookiesForUserIdentifier:(id)a0;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (id)init;
- (id)getCookiesForURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getCookie:(id)a0 userIdentifier:(id)a1;
- (void)removeAllCookies;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (id)_accountForUserIdentifier:(id)a0;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (void)_saveCookies:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (void)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (void)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (void)saveCookies:(id)a0 forURL:(id)a1;
- (void)removeCookiesWithProperties:(id)a0;

@end
