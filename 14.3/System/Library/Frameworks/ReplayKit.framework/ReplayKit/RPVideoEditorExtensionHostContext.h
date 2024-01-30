@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol>

@property (weak, nonatomic) RPVideoEditorHostViewController *hostViewController;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)extensionObjectProxy;
- (oneway void)extensionDidFinishWithActivityTypes:(id)a0;

@end
