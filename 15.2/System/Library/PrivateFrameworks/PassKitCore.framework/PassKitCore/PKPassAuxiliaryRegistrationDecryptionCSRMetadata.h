@interface PKPassAuxiliaryRegistrationDecryptionCSRMetadata : PKPassAuxiliaryRegistrationCSRMetadata

@property (readonly, nonatomic) unsigned long long decryptionSchemeVersion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
