@class NSString;

@interface PATCCAccess : PAAccess

@property (readonly, nonatomic) NSString *tccService;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAuthorization:(id)a0;
+ (id)accessWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;
+ (id)accessWithAccessor:(id)a0 forService:(id)a1;
+ (id)eventStreamIdentifier;
+ (id)accessWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;

- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithProto:(id)a0;
- (id)descriptionForCategory;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)category;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthorization:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)initWithAccessor:(id)a0 forService:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 forService:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forService:(id)a1;
- (id)initWithInsecureProcessIdentifier:(int)a0 forService:(id)a1;

@end
