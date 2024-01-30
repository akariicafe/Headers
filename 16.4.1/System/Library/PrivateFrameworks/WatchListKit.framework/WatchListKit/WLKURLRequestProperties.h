@class NSString, NSDictionary, NSData, NSNumber;

@interface WLKURLRequestProperties : NSObject

@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSString *routeName;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) NSNumber *apiVersion;
@property (copy, nonatomic) NSNumber *clientProtocolVersion;
@property (nonatomic) long long options;

+ (id)requestPropertiesWithEndpoint:(id)a0;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 caller:(id)a3;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 apiVersion:(id)a6 options:(long long)a7;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6 clientProtocolVersion:(id)a7;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 apiVersion:(id)a7 options:(long long)a8;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 apiVersion:(id)a7 options:(long long)a8 clientProtocolVersion:(id)a9;
+ (id)requestPropertiesWithServerRoute:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6;
+ (id)requestPropertiesWithServerRoute:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 options:(long long)a7;
+ (id)requestPropertiesWithServerRoute:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 options:(long long)a7 clientProtocolVersion:(id)a8;

- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)URLRequestWithConfiguration:(id)a0;

@end
