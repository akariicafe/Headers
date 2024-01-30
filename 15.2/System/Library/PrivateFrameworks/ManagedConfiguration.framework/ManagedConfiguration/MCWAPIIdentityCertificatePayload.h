@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSData *pemData;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (struct __SecCertificate { } *)copyCertificate;
- (BOOL)isIdentity;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)copyIdentityFromKeychain;
- (id)verboseDescription;

@end
