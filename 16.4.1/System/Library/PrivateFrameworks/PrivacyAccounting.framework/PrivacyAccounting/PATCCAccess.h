@class NSString;

@interface PATCCAccess : PAAccess

@property (readonly, nonatomic) NSString *tccService;

+ (id)accessWithAuthorization:(id)a0;
+ (id)accessWithAccessor:(id)a0 forService:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)eventStreamIdentifier;
+ (id)accessWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;
+ (id)accessWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionForCategory;
- (id)initWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithAccessor:(id)a0 forService:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 forService:(id)a3;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessor:(id)a0 forService:(id)a1 assetIdentifiers:(id)a2;
- (id)category;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)initWithAuthorization:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
