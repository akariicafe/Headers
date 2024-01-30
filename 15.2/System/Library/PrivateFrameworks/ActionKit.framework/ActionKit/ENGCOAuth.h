@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject

@property (copy, nonatomic) NSDictionary *requestParameters;
@property (copy, nonatomic) NSString *HTTPMethod;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *signatureSecret;
@property (retain, nonatomic) NSDictionary *OAuthParameters;

+ (id)nonce;
+ (void)setUserAgent:(id)a0;
+ (id)timeStamp;
+ (void)setHTTPShouldHandleCookies:(BOOL)a0;
+ (id)queryStringFromParameters:(id)a0;
+ (void)setTimeStampOffset:(long long)a0;
+ (id)URLRequestForPath:(id)a0 GETParameters:(id)a1 host:(id)a2 consumerKey:(id)a3 consumerSecret:(id)a4 accessToken:(id)a5 tokenSecret:(id)a6;
+ (id)URLRequestForPath:(id)a0 GETParameters:(id)a1 scheme:(id)a2 host:(id)a3 consumerKey:(id)a4 consumerSecret:(id)a5 accessToken:(id)a6 tokenSecret:(id)a7;
+ (id)URLRequestForPath:(id)a0 POSTParameters:(id)a1 host:(id)a2 consumerKey:(id)a3 consumerSecret:(id)a4 accessToken:(id)a5 tokenSecret:(id)a6;

- (id)authorizationHeader;
- (id)signature;
- (id)request;
- (void).cxx_destruct;
- (id)initWithConsumerKey:(id)a0 consumerSecret:(id)a1 accessToken:(id)a2 tokenSecret:(id)a3;
- (id)signatureBase;

@end
