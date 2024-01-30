@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSData *pemData;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (struct __SecCertificate { } *)copyCertificate;
- (BOOL)isIdentity;
- (struct __SecIdentity { } *)copyIdentityFromKeychain;

@end
