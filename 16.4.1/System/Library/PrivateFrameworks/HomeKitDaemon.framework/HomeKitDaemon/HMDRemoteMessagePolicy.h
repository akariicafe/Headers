@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property (readonly) BOOL requiresSecureMessage;
@property (readonly) BOOL allowsAnonymousMessage;
@property (readonly) BOOL requiresAccountMessage;
@property (readonly) unsigned long long transportRestriction;
@property (readonly) unsigned long long roles;

+ (id)defaultPolicy;
+ (id)defaultSecurePolicy;
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)__initWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

@end
