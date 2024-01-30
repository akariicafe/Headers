@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)objWithDict:(id)a0;
+ (id)objWithMessage:(id)a0;
+ (id)xpcMessageName;
+ (id)messageName;

- (id)messagePayload;
- (id)xpcMessageName;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)messageName;
- (void)encodeWithCoder:(id)a0;

@end
