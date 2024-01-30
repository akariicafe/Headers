@class NSString;

@interface SPAccessoryPairingConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleEmoji;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 roleId:(long long)a1 roleEmoji:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
