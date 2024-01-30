@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol>

@property (weak, nonatomic) RPVideoEditorHostViewController *hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)extensionObjectProxy;
- (oneway void)extensionDidFinishWithActivityTypes:(id)a0;

@end
