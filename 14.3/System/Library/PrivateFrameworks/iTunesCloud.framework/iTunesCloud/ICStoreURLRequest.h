@class NSString, NSDictionary, NSArray, ICJSSignConfiguration, ICStoreRequestContext;

@interface ICStoreURLRequest : ICURLRequest

@property (class, readonly, copy) NSString *currentConnectionTypeHeader;

@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long anisetteVersion;
@property (nonatomic) BOOL shouldUseMescalSigning;
@property (nonatomic) BOOL shouldParseBodyData;
@property (nonatomic) BOOL shouldRequireURLBag;
@property (copy, nonatomic) NSString *machineDataSyncState;
@property (copy, nonatomic) NSDictionary *additionalHTTPCookies;
@property (copy, nonatomic) NSArray *additionalQueryItems;
@property (copy, nonatomic) ICJSSignConfiguration *JSSignConfiguration;

+ (Class)_responseHandlerClass;
+ (unsigned long long)_defaultMaxRetryCountForReason:(id)a0;
+ (BOOL)_shouldPersonalizeRequestForClientInfo:(id)a0 personalizationStyle:(long long)a1;

- (void)buildStoreURLRequestWithURLRequest:(id)a0 builderProperties:(id)a1 completionHandler:(id /* block */)a2;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 requestContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1;
- (void)_getSignatureDataForRequest:(id)a0 urlBag:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_shouldPersonalizeRequest;
- (id)_stringForCachePolicy:(unsigned long long)a0;
- (id)initWithURLRequest:(id)a0 requestContext:(id)a1 resumeData:(id)a2;
- (id)description;

@end
