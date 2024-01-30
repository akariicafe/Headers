@interface UIPrintServiceExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)_gatherPrintersForPrintInfo:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
