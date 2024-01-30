@class MTSThreadNetworkAssociation;

@interface MTSDeviceSetupExtensionSelectThreadNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSThreadNetworkAssociation *threadNetworkAssociation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithThreadNetworkAssociation:(id)a0;

@end
