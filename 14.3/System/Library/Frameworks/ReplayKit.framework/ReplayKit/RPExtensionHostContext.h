@interface RPExtensionHostContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)didConnectToVendor:(id)a0;

@end
