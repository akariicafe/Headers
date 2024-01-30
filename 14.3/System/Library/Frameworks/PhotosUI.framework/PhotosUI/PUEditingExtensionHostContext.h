@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost>

@property (copy) id /* block */ contentEditingOutputCommitHandler;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
