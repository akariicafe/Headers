@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canCreateContacts;
@property (readonly, nonatomic) BOOL canDeleteContacts;
@property (readonly, nonatomic) BOOL canCreateGroups;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCanCreateContacts:(BOOL)a0 canDeleteContacts:(BOOL)a1 canCreateGroups:(BOOL)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
