@class NSURLSessionConfiguration, IMURLRequestEncoder, IMURLSession;

@interface IMBaseStoreService : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) IMURLRequestEncoder *requestEncoder;
@property (retain, nonatomic) NSURLSessionConfiguration *configuration;
@property (retain, nonatomic) IMURLSession *amsUrlSession;
@property (nonatomic) BOOL wantsJSSignature;
@property (nonatomic) BOOL personalizeRequests;

+ (BOOL)shouldFollowRedirects;
+ (id)signatureQueryParams;

- (void)cancelAllRequests;
- (id)init;
- (void).cxx_destruct;
- (void)performRequest:(id /* block */)a0;
- (id)bag;
- (void)signRequest:(id)a0;
- (void)performDataRequest:(id)a0 callback:(id /* block */)a1;
- (void)performUrlRequest:(id)a0 callback:(id /* block */)a1;
- (id)initWithConcurrentOperationCount:(long long)a0;

@end
