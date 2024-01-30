@interface COClusterRole : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)roleForCoordinator;
+ (id)roleForUnknown;

- (BOOL)isPrimary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isUnknown;
- (id)initWithRoleFlags:(unsigned long long)a0;
- (BOOL)isEqualToRole:(id)a0;
- (BOOL)satisfiesRole:(id)a0;

@end
