@class NSString, AMSKeychainOptions, NSDictionary, AMSBagKeySet, ACAccount, NSObject, AMSSigningSecurityService, NSURLSessionTask, AMSProcessInfo;
@protocol AMSBagProtocol, AMSResponseDecoding, AMSURLBagContract, OS_dispatch_queue;

@interface AMSURLRequestEncoder : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSRequestEncoding>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long encodeCount;
@property (readonly, nonatomic) AMSSigningSecurityService *signingService;
@property (retain, nonatomic) NSURLSessionTask *parentTask;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL compressRequestBody;
@property (nonatomic) BOOL disableResponseDecoding;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) BOOL enableRemoteSecuritySigning;
@property (nonatomic) BOOL includeClientVersions;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (retain, nonatomic) NSString *logUUID;
@property (nonatomic) long long mescalType;
@property (nonatomic) long long requestEncoding;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (nonatomic) BOOL shouldSetCookiesFromResponse;
@property (nonatomic) BOOL shouldSetStorefrontFromResponse;
@property (nonatomic) BOOL urlKnownToBeTrusted;
@property (retain, nonatomic) id<AMSURLBagContract> bagContract;
@property (nonatomic) long long dataEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

- (id)requestWithMethod:(long long)a0 URL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)_methodStringFromMethod:(long long)a0;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2;
- (id)initWithBagContract:(id)a0;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 headers:(id)a2 parameters:(id)a3;
- (id)init;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)requestWithMethod:(long long)a0 URL:(id)a1 error:(id *)a2;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 URLString:(id)a1 error:(id *)a2;
- (void)_addSecuritySigningHeadersToRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 error:(id *)a2;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)requestWithMethod:(long long)a0 bagURL:(id)a1 parameters:(id)a2;
- (id)initWithBag:(id)a0;

@end
