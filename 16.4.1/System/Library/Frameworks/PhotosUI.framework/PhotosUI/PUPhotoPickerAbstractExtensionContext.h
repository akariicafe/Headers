@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)proxy;
- (id)principalObject;
- (void)firstPayloadFromExtensionItems:(id)a0 completion:(id /* block */)a1;
- (void)invalidateContext;

@end
