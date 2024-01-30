@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy

@property (readonly) unsigned long long requiredEntitlements;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)canSendWithPolicyParameters:(id)a0;
- (id)initWithRequiredEntitlements:(unsigned long long)a0;

@end
