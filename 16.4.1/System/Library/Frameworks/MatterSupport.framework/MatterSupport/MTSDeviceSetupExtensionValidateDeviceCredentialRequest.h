@class MTSDeviceCredential;

@interface MTSDeviceSetupExtensionValidateDeviceCredentialRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceCredential *deviceCredential;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithDeviceCredential:(id)a0;

@end
