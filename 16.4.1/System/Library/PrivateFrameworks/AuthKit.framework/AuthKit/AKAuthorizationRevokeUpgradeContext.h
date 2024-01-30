@class NSString;

@interface AKAuthorizationRevokeUpgradeContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *teamID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
