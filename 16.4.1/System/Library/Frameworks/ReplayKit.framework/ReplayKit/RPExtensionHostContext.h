@interface RPExtensionHostContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)didConnectToVendor:(id)a0;

@end
