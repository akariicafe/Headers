@class NSSet, NSData;

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSData *payloadCertificate;

+ (id)buildRequiredOnlyWithCertificate:(id)a0;
+ (id)buildWithCertificate:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
