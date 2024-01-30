@class NSString, NSDictionary, NSURL, NSData;

@interface SOAuthorizationRequestParametersCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *requestedOperation;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSString *realm;
@property (copy, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSData *auditTokenData;
@property (copy, nonatomic) NSString *callerBundleIdentifier;
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (nonatomic) BOOL useInternalExtensions;
@property (nonatomic) long long responseCode;
@property (nonatomic, getter=isCFNetworkInterception) BOOL cfNetworkInterception;
@property (nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (copy, nonatomic) NSString *callerTeamIdentifier;
@property (copy, nonatomic) NSString *localizedCallerDisplayName;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAuthorizationParameters:(id)a0;
- (id)initWithAuthorizationParametersCore:(id)a0;

@end
