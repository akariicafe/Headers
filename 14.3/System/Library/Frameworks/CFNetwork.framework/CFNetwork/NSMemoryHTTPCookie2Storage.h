@class NSString, NSMutableDictionary;

@interface NSMemoryHTTPCookie2Storage : NSObject <NSInternalHTTPCookie2Storage> {
    NSMutableDictionary *memoryCookies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCookie:(id)a0;
- (id)init;
- (void)deleteCookie:(id)a0;
- (void).cxx_destruct;
- (void)deleteCookies:(id)a0;
- (id)getAllCookies;
- (void)deleteCookiesWithFilter:(id)a0;
- (id)getCookiesWithFilter:(id)a0;
- (void)deleteAllCookies;
- (void)setCookies:(id)a0;

@end
