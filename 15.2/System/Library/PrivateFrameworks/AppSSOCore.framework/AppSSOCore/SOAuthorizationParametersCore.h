@class NSString, NSDictionary, NSURL, NSData;

@interface SOAuthorizationParametersCore : NSObject

@property (copy, nonatomic) NSString *operation;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) BOOL useInternalExtensions;
@property (nonatomic) long long responseCode;
@property (nonatomic, getter=isCFNetworkInterception) BOOL cfNetworkInterception;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
