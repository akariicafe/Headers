@class NSString, NSHTTPCookieStorage;

@interface NWConcrete_nw_http_cookie_storage : NSObject <OS_nw_http_cookie_storage> {
    NSHTTPCookieStorage *cookieStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
