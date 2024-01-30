@class NSString;

@interface SPBeaconRole : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *roleEmoji;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRoleId:(long long)a0 role:(id)a1 roleEmoji:(id)a2;

@end
