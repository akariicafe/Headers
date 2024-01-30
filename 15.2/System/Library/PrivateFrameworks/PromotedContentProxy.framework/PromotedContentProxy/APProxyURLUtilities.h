@interface APProxyURLUtilities : NSObject

+ (BOOL)shouldProxyRequestToHost:(id)a0;
+ (id)proxyURLForVideoURL:(id)a0 adIdentifier:(id)a1 changeScheme:(BOOL)a2;
+ (id)composeUserAgentString:(id)a0 adIdentifier:(id)a1 maxRequestCount:(long long)a2;
+ (BOOL)_shouldProxyRequestToHost:(id)a0;
+ (id)_proxyURLForVideoURL:(id)a0 adIdentifier:(id)a1 changeScheme:(BOOL)a2;
+ (void)parseUserAgentString:(id)a0 adIdentifier:(id *)a1 maxRequestCount:(id *)a2;
+ (void)changeSchemeTo:(long long)a0 forUrlRequest:(id)a1;

@end
