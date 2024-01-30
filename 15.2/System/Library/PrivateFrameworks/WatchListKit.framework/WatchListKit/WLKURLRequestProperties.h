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
@property (nonatomic) long long options;

+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 caller:(id)a3;
+ (id)requestPropertiesWithServerRoute:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 options:(long long)a6;
+ (id)requestPropertiesWithEndpoint:(id)a0;
+ (id)requestPropertiesWithServerRoute:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 options:(long long)a7;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 headers:(id)a3 caller:(id)a4 timeout:(id)a5 apiVersion:(id)a6 options:(long long)a7;
+ (id)requestPropertiesWithEndpoint:(id)a0 queryParameters:(id)a1 httpMethod:(id)a2 httpBody:(id)a3 headers:(id)a4 caller:(id)a5 timeout:(id)a6 apiVersion:(id)a7 options:(long long)a8;

- (id)shortDescription;
- (id)URLRequestWithConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
