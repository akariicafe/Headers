@interface COClusterRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isPrimary;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithFlags:(unsigned long long)a0;
- (BOOL)isEqualToRole:(id)a0;

@end
