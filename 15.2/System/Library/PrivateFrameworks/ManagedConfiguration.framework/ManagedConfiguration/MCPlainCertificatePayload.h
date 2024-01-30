@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSString *certificateFileName;
@property (readonly, retain, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) int dataEncoding;
@property (readonly, retain, nonatomic) NSString *password;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (struct __SecCertificate { } *)copyCertificate;
- (BOOL)isIdentity;
- (BOOL)isSigned;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (void).cxx_destruct;
- (id)verboseDescription;
- (id)persistentResourceID;

@end
