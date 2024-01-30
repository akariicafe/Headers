@class DMFControlGroupIdentifier;

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier

@property (readonly, nonatomic) unsigned int leaderIP;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) DMFControlGroupIdentifier *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithString:(id)a0;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithOrganizationUUID:(id)a0 groupID:(unsigned short)a1;
- (id)initWithOrganizationUUID:(id)a0 groupID:(unsigned short)a1 leaderIP:(unsigned int)a2 port:(unsigned short)a3;
- (BOOL)isEqualToControlSessionIdentifier:(id)a0;
- (id)initWithOrganizationUUID:(id)a0 groupID:(unsigned short)a1 leaderIP:(unsigned int)a2;

@end
