@interface PKPassAuxiliaryRegistrationSignatureCSRMetadata : PKPassAuxiliaryRegistrationCSRMetadata

@property (readonly, nonatomic) unsigned long long signatureSchemeVersion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
