@class NSString, AMSLazyPromise, AMSProcessInfo;
@protocol AMSBagAccountProvider;

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>

@property (readonly, nonatomic) id<AMSBagAccountProvider> accountProvider;
@property (readonly, nonatomic) AMSLazyPromise *URLSessionPromise;
@property (readonly, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cookiesForNames:(id)a0 clientInfo:(id)a1 account:(id)a2;
+ (id)_requestIdentifierForQueryItems:(id)a0;
+ (BOOL)_shouldReloadDataForOriginalCookies:(id)a0 newCookies:(id)a1;
+ (id)_defaultURLCookieNames;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 accountProvider:(id)a4;
+ (id)_queryItemsForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 cookieNames:(id)a3 account:(id)a4 storefront:(id)a5;
+ (id)_setStorefrontFromURLResponse:(id)a0 bagData:(id)a1;
+ (void)_setURLCookieNames:(id)a0 forProfile:(id)a1;
+ (id)requestPartialIdentifierForClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2;
+ (id)_requestIdentifierForQueryItems:(id)a0 prefix:(id)a1;
+ (id)_URLCookieNamesForProfile:(id)a0;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_createRequestWithQueryItems:(id)a0;
- (BOOL)_shouldRetryForResult:(id)a0 cookieNames:(id)a1 urlCookies:(id)a2 responseStorefront:(id)a3;
- (void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)a0;
- (id)_performFetchWithAttemptedCount:(unsigned long long)a0 account:(id)a1 storefront:(id)a2;
- (id)performFetch;
- (id)initWithClientInfo:(id)a0 profile:(id)a1 profileVersion:(id)a2 accountProvider:(id)a3;
- (void).cxx_destruct;

@end
