@class PAApplication;

@interface PAReplayKitAccess : PAAccess

@property (readonly, nonatomic) PAApplication *broadcaster;

+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:(id)a0 fromBroadcaster:(id)a1;
+ (id)eventStreamIdentifier;
+ (id)accessWithAccessor:(id)a0;

- (id)initWithAccessor:(id)a0;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithProto:(id)a0;
- (id)JSONObject;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)category;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (id)initWithAccessor:(id)a0 broadcaster:(id)a1 identifier:(id)a2 kind:(long long)a3;
- (void).cxx_destruct;
- (id)initWithAccessor:(id)a0 fromBroadcaster:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithNewBroadcaster:(id)a0;

@end
