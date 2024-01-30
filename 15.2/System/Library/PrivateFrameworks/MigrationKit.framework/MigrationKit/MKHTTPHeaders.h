@class MKHTTPContentDisposition, NSString, NSDictionary, MKHTTPProxyAuthorization, MKHTTPContentPayload, MKHTTPContentRange;

@interface MKHTTPHeaders : NSObject

@property (copy, nonatomic) NSString *statusText;
@property (nonatomic) unsigned long long statusCode;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned int contentLength;
@property (copy, nonatomic) NSString *accept;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *authorization;
@property (copy, nonatomic) NSDictionary *query;
@property (retain, nonatomic) MKHTTPContentRange *contentRange;
@property (retain, nonatomic) MKHTTPContentDisposition *contentDisposition;
@property (retain, nonatomic) MKHTTPProxyAuthorization *proxyAuthorization;
@property (retain, nonatomic) MKHTTPContentPayload *contentPayload;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)responseHeadersData;
- (id)pairsFromArray:(id)a0 byKey:(id)a1 atIndex:(long long)a2;

@end
