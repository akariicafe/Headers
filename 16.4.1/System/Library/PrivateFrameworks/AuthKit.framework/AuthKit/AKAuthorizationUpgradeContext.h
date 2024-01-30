@class NSString;

@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *teamID;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
