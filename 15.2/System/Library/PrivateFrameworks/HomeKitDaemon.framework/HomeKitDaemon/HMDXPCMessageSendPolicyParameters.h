@interface HMDXPCMessageSendPolicyParameters : NSObject

@property (readonly, nonatomic) unsigned long long entitlements;

- (id)signature;
- (id)initWithEntitlements:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
