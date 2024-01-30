@class PKPassAuxiliaryRegistrationSignatureCSRMetadata, PKPassAuxiliaryRegistrationDecryptionCSRMetadata;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassAuxiliaryRegistrationSignatureCSRMetadata *deviceSignatureCSRMetadata;
@property (readonly, nonatomic) PKPassAuxiliaryRegistrationDecryptionCSRMetadata *deviceDecryptionCSRMetadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
