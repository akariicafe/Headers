@interface HMDHomeManagerXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long entitlements;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (BOOL)canSendWithPolicyParameters:(id)a0;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1 active:(BOOL)a2;

@end
