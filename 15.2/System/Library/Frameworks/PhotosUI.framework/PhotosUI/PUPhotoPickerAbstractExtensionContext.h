@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)proxy;
- (id)principalObject;
- (void)invalidateContext;
- (void)firstPayloadFromExtensionItems:(id)a0 completion:(id /* block */)a1;

@end
