@class NSUUID, NSString;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *organizationUUID;
@property (readonly, nonatomic) unsigned short groupID;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)new;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithOrganizationUUID:(id)a0 groupID:(unsigned short)a1;
- (BOOL)isEqualToGroupIdentifier:(id)a0;

@end
