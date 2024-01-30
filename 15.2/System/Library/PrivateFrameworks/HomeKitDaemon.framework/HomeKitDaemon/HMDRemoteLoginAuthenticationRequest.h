@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)messageName;
+ (id)xpcMessageName;
+ (id)objWithDict:(id)a0;
+ (id)objWithMessage:(id)a0;

- (id)messagePayload;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)messageName;
- (id)initWithCoder:(id)a0;
- (id)xpcMessageName;

@end
