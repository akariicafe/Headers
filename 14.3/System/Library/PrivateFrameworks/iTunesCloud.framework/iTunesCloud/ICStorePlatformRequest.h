@class NSArray, NSDictionary, NSString, ICStoreRequestContext;

@interface ICStorePlatformRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *HTTPHeaders;
@property (readonly, copy, nonatomic) NSArray *queryItems;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (copy, nonatomic) NSString *clientBundleVersion;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (nonatomic) long long batchSize;
@property (copy, nonatomic) id /* block */ batchResultsHandler;
@property (copy, nonatomic) NSString *imageProfile;
@property (copy, nonatomic) NSString *keyProfile;
@property (nonatomic) long long personalizationStyle;
@property (copy, nonatomic) NSString *platformIdentifier;
@property (copy, nonatomic) NSString *protocolVersion;
@property (nonatomic) double retryDelay;
@property (nonatomic) BOOL returnsLocalEquivalencies;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL shouldIgnoreCache;

- (id)performWithResponseHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithItemIdentifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
