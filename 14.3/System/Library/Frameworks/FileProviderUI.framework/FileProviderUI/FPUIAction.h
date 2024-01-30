@interface FPUIAction : UIDocumentBrowserActionDescriptor

@property (readonly, nonatomic) BOOL isNonUIAction;

- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6;

@end
