@class NSObject;
@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) ICHTTPCookieStore *sharedCookieStore;

- (void)saveCookies:(id)a0 forURL:(id)a1 userIdentifier:(id)a2;
- (void)removeAllCookies;
- (id)getGlobalAccountCookiesForURL:(id)a0;
- (id)_cookieDictionaryForURL:(id)a0 userIdentifier:(id)a1;
- (id)getCookiesForURL:(id)a0 userIdentifier:(id)a1;
- (void)saveCookies:(id)a0 forURL:(id)a1;
- (void)saveGlobalAccountCookies:(id)a0 forURL:(id)a1;
- (void)_saveCookies:(id)a0 userIdentifier:(id)a1;
- (void)removeCookiesWithProperties:(id)a0;
- (id)getCookiesForUserIdentifier:(id)a0;
- (id)getCookie:(id)a0 userIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)getCookiesForURL:(id)a0;
- (id)init;
- (id)_accountForUserIdentifier:(id)a0;
- (id)getCookiesHeadersForURL:(id)a0 userIdentifier:(id)a1;
- (void)dealloc;

@end
