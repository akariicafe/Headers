@class NSString;

@interface NNMKAccountIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountId;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *refreshToken;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long identityType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
