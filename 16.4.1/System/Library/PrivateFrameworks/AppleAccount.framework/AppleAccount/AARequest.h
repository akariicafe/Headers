@class NSURLRequest, NSDictionary, NSString;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {
    id /* block */ _handler;
    NSString *_initialURLString;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
}

@property (readonly) NSURLRequest *urlRequest;
@property (nonatomic) BOOL flushCache;
@property (copy, nonatomic) NSDictionary *customHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;
+ (id)protocolVersion;
+ (id)redactedHeadersFromHTTPHeaders:(id)a0;

- (void)dealloc;
- (id)urlCredential;
- (id)initWithURLString:(id)a0;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (id)urlString;
- (void).cxx_destruct;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)bodyDictionary;
- (void)setDeviceProvisioningMachineId:(id)a0;
- (void)_handleDataTaskCompletionWithData:(id)a0 response:(id)a1 error:(id)a2;
- (void)performPinnedOnlyRequestWithHandler:(id /* block */)a0;
- (void)performPinnedRequestWithHandler:(id /* block */)a0;
- (void)performRequestForDevice:(id)a0 anisetteDataProvider:(id)a1 withHandler:(id /* block */)a2;
- (void)performRequestForDevice:(id)a0 withHandler:(id /* block */)a1;
- (void)performRequestWithSession:(id)a0 withHandler:(id /* block */)a1;
- (void)performSignedRequestWithHandler:(id /* block */)a0;
- (id)redactedBodyStringWithPropertyList:(id)a0;
- (void)setDeviceProvisioningOneTimePassword:(id)a0;

@end
