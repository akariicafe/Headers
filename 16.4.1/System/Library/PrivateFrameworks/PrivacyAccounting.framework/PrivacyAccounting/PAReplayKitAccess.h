@class PAApplication;

@interface PAReplayKitAccess : PAAccess

@property (readonly, nonatomic) PAApplication *broadcaster;

+ (id)accessWithAccessor:(id)a0 fromBroadcaster:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)accessWithAccessor:(id)a0;
+ (id)eventStreamIdentifier;

- (id)JSONObject;
- (id)initWithProto:(id)a0;
- (id)initWithAccessor:(id)a0 broadcaster:(id)a1 identifier:(id)a2 kind:(long long)a3;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hashWithOptions:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessor:(id)a0 fromBroadcaster:(id)a1;
- (id)initWithAccessor:(id)a0;
- (id)category;
- (BOOL)isEqualToAccess:(id)a0 withOptions:(unsigned long long)a1;
- (id)copyWithNewBroadcaster:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
