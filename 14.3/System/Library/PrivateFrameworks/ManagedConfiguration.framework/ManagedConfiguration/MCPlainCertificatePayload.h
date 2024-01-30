@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSString *certificateFileName;
@property (readonly, retain, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) int dataEncoding;
@property (readonly, retain, nonatomic) NSString *password;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (struct __SecCertificate { } *)copyCertificate;
- (id)installationWarnings;
- (BOOL)isIdentity;
- (id)persistentResourceID;
- (BOOL)isSigned;

@end
