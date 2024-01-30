@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)proxy;
- (void)invalidateContext;
- (id)principalObject;
- (void)firstPayloadFromExtensionItems:(id)a0 completion:(id /* block */)a1;

@end
