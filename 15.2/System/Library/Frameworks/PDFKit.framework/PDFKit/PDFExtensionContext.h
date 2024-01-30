@class NSString, PDFExtensionViewController;

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol>

@property (weak, nonatomic) PDFExtensionViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (oneway void)hostToExtension:(id)a0;

@end
