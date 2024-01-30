@interface MCCertificateWrapperProfile : MCConfigurationProfile

+ (id)wrapperProfileDictionaryWithCertificateData:(id)a0 fileName:(id)a1 outSignerCerts:(id *)a2;
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)a0 fileName:(id)a1 name:(id)a2 identifier:(id)a3;
+ (id)_wrapperProfileForWAPICertificate:(struct __SecCertificate { } *)a0 fileName:(id)a1 PEMData:(id)a2;
+ (id)_basicWrapperProfileDictForCertificateName:(id)a0 fileName:(id)a1 identifier:(id)a2;
+ (id)_wrapperPayloadDictWithCertData:(id)a0 fileName:(id)a1 name:(id)a2 identifier:(id)a3 type:(id)a4;
+ (id)_identifierHashFromData:(id)a0;
+ (id)_wrapperProfileDictForCertificate:(struct __SecCertificate { } *)a0 fileName:(id)a1 certData:(id)a2 type:(id)a3;

- (BOOL)isSigned;
- (int)trustLevel;
- (id)_certificatePayload;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)a0 signerCerts:(id)a1 allowEmptyPayload:(BOOL)a2 outError:(id *)a3;
- (id)stubDictionary;

@end
