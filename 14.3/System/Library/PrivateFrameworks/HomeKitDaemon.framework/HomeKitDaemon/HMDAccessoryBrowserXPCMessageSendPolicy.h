@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) unsigned long long requiredEntitlements;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)canSendWithPolicyParameters:(id)a0;
- (id)initWithRequiredEntitlements:(unsigned long long)a0;

@end
