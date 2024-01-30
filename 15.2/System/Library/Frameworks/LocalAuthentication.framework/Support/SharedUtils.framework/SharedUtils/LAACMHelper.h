@interface LAACMHelper : NSObject {
    BOOL _contextOwner;
}

@property (readonly, nonatomic) unsigned int acmTrackingNumber;
@property (readonly, nonatomic) struct __ACMHandle { } *acmContext;

+ (BOOL)requirement:(struct __ACMRequirement { } *)a0 hasFlag:(unsigned long long)a1 andType:(unsigned int)a2;
+ (id)requirement:(struct __ACMRequirement { } *)a0 dataProperty:(unsigned int)a1;
+ (id)boolEnvironmentVariable:(unsigned int)a0;
+ (const char *)acmPolicyForPolicy:(long long)a0;
+ (id)requirement:(struct __ACMRequirement { } *)a0 uint32Property:(unsigned int)a1;
+ (BOOL)requirement:(struct __ACMRequirement { } *)a0 hasState:(unsigned int)a1 andType:(unsigned int)a2;

- (void)dealloc;
- (id)initWithExternalizedContext:(id)a0;
- (BOOL)performCredentialBlock:(id /* block */)a0 credentialType:(unsigned int)a1 error:(id *)a2;
- (BOOL)performContextBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 parameter:(id)a2 flags:(unsigned int *)a3 error:(id *)a4;
- (BOOL)_verifyRequirement:(struct __ACMRequirement { } *)a0 satisfiedForType:(unsigned int)a1 flags:(unsigned int *)a2;
- (void)verifyPolicy:(char *)a0 preflight:(BOOL)a1 parameters:(const struct { unsigned int x0; void *x1; unsigned int x2; } *)a2 parametersCount:(unsigned int)a3 maxGlobalCredentialAge:(unsigned int)a4 processRequirement:(id /* block */)a5;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (BOOL)addCredential:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)replacePassphraseCredentialWithPurpose:(unsigned int)a0 passphrase:(id)a1 scope:(unsigned int)a2 error:(id *)a3;
- (BOOL)addExtractablePassphrase:(id)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeCredentialsOfType:(unsigned int)a0 error:(id *)a1;
- (BOOL)isCredentialOfTypeSet:(unsigned int)a0 error:(id *)a1;
- (id)credentialOfType:(unsigned int)a0 property:(unsigned int)a1 error:(id *)a2;
- (BOOL)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 error:(id *)a2;
- (void)preflightPolicy:(char *)a0 parameters:(const struct { unsigned int x0; void *x1; unsigned int x2; } *)a1 parametersCount:(unsigned int)a2 maxGlobalCredentialAge:(unsigned int)a3 processRequirement:(id /* block */)a4;
- (BOOL)setData:(id)a0 type:(unsigned int)a1 error:(id *)a2;

@end
