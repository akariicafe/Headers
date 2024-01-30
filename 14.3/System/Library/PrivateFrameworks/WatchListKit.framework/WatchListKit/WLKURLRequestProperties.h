@class NSString, NSDictionary, NSNumber;

@interface WLKURLRequestProperties : NSObject

@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSNumber *apiVersion;
@property (nonatomic) long long options;

+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 apiVersion:(id)a6 options:(long long)a7;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6;
+ (id)requestPropertiesWithEndpoint:(id)a0;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 caller:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)URLRequestWithConfiguration:(id)a0;

@end
