@class MSOID;

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) struct __SecCertificate { } *encryptionCertificate;
@property (readonly, retain) MSOID *attributeType;

- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;

@end
