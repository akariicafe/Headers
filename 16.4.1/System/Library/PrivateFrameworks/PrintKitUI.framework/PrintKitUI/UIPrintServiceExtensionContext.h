@interface UIPrintServiceExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)init;
- (void)_gatherPrintersForPrintInfo:(id)a0 reply:(id /* block */)a1;

@end
