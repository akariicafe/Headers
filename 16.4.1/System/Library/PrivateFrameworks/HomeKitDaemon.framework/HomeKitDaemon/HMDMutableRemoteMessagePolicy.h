@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property BOOL requiresSecureMessage;
@property BOOL allowsAnonymousMessage;
@property BOOL requiresAccountMessage;
@property unsigned long long transportRestriction;
@property unsigned long long roles;

+ (id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRoles:(unsigned long long)a0;
- (void)setAllowsAnonymousMessage:(BOOL)a0;
- (void)setRequiresAccountMessage:(BOOL)a0;
- (void)setRequiresSecureMessage:(BOOL)a0;
- (void)setTransportRestriction:(unsigned long long)a0;

@end
