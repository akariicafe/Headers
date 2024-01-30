@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPICookiesObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onChanged;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onChanged;

+ (id)cookiesWithExtensionIdentifier:(id)a0 runtime:(id)a1;
+ (BOOL)_isValidDetailsDictionary:(id)a0 requiredKeys:(id)a1 optionalKeys:(id)a2 apiName:(id)a3 outExceptionString:(id *)a4;

- (void).cxx_destruct;
- (void)getCookieWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getAllCookiesWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)setCookieWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)removeCookieWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getAllCookieStoresWithBrowserContextController:(id)a0 completionHandler:(id)a1;

@end
