@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, getter=isActive) BOOL active;

- (id)signature;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithEntitlements:(unsigned long long)a0 options:(unsigned long long)a1;

@end
