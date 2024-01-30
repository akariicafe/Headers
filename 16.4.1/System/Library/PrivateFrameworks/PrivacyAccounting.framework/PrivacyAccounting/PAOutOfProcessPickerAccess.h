@interface PAOutOfProcessPickerAccess : PAAccess

@property (readonly, nonatomic) long long pickerType;

+ (BOOL)supportsSecureCoding;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:(id)a0 forType:(long long)a1;
+ (id)accessWithAuditToken:(struct { unsigned int x0[8]; })a0 forType:(long long)a1;

- (id)JSONObject;
- (id)initWithProto:(id)a0;
- (id)initWithAccessor:(id)a0 forType:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionForCategory;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithAccessor:(id)a0 identifier:(id)a1 kind:(long long)a2 forType:(long long)a3;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)category;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 forType:(long long)a1;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)description;

@end
