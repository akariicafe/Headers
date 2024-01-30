@interface LAACMHelper : NSObject {
    BOOL _contextOwner;
}

@property (readonly, nonatomic) unsigned int acmTrackingNumber;
@property (readonly, nonatomic) struct __ACMHandle { } *acmContext;

+ (const char *)acmPolicyForPolicy:(long long)a0;

- (id)initWithExternalizedContext:(id)a0;
- (void)dealloc;
- (BOOL)performCredentialBlock:(id /* block */)a0 credentialType:(unsigned int)a1 error:(id *)a2;
- (BOOL)performContextBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)_verifyRequirement:(struct __ACMRequirement { } *)a0 satisfiedForType:(unsigned int)a1;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (BOOL)addCredential:(unsigned int)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)replacePassphraseCredentialWithPurpose:(unsigned int)a0 passphrase:(id)a1 scope:(unsigned int)a2 error:(id *)a3;
- (BOOL)addExtractablePassphrase:(id)a0 scope:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeCredentialsOfType:(unsigned int)a0 error:(id *)a1;
- (BOOL)isCredentialOfTypeSet:(unsigned int)a0 error:(id *)a1;
- (id)credentialOfType:(unsigned int)a0 property:(unsigned int)a1 error:(id *)a2;
- (BOOL)verifyRequirementOfType:(unsigned int)a0 policy:(char *)a1 error:(id *)a2;
- (BOOL)setData:(id)a0 type:(unsigned int)a1 error:(id *)a2;

@end
