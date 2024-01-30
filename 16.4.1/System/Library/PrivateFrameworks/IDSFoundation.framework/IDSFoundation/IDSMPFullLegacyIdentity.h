@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _SecMPFullIdentity { } *fullIdentity;

+ (struct _SecMPFullIdentity { } *)_createFullIdentityFromData:(id)a0 error:(id *)a1;
+ (id)identityWithData:(id)a0 error:(id *)a1;
+ (id)identityWithDataProtectionClass:(unsigned int)a0 error:(id *)a1;
+ (id)identityWithError:(id *)a0;
+ (struct _SecMPFullIdentity { } *)_createFullIdentityWithDataProtectionClass:(unsigned int)a0 error:(id *)a1;
+ (struct _SecMPPublicIdentity { } *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity { } *)a0 error:(id *)a1;
+ (struct _SecMPFullIdentity { } *)_createFullIdentityWithError:(id *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)purgeFromKeychain:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)protectedHashOfMessageData:(id)a0 error:(id *)a1;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity { } *)a0;
- (id)verifyAndExposeData:(id)a0 withSigner:(id)a1 error:(id *)a2;
- (id)publicIdentityWithError:(id *)a0;
- (BOOL)updateIdentityToDataProtectionClass:(unsigned int)a0 error:(id *)a1;
- (BOOL)didDataRepresentationFormatChangeFromDataRepresentation:(id)a0 error:(id *)a1;
- (unsigned int)dataProtectionClassWithError:(id *)a0;

@end
