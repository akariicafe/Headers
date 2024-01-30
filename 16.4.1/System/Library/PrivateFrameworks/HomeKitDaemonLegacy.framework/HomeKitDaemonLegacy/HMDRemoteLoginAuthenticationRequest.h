@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (id)messageName;
+ (BOOL)supportsSecureCoding;
+ (id)objWithMessage:(id)a0;
+ (id)objWithDict:(id)a0;
+ (id)xpcMessageName;

- (void)encodeWithCoder:(id)a0;
- (id)messageName;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)messagePayload;
- (id)xpcMessageName;

@end
