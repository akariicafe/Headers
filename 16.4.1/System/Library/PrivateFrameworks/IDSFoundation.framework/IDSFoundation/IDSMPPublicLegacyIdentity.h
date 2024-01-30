@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _SecMPPublicIdentity { } *publicIdentity;

+ (id)identityWithData:(id)a0 error:(id *)a1;
+ (struct _SecMPPublicIdentity { } *)_createPublicIdentityFromData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPublicIdentity:(struct _SecMPPublicIdentity { } *)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)signAndProtectData:(id)a0 withSigner:(id)a1 error:(id *)a2;

@end
