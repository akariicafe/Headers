@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canCreateContacts;
@property (readonly, nonatomic) BOOL canDeleteContacts;
@property (readonly, nonatomic) BOOL canCreateGroups;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanCreateContacts:(BOOL)a0 canDeleteContacts:(BOOL)a1 canCreateGroups:(BOOL)a2;

@end
