@interface WFShareExtensionActionUIKitUserInterface : WFEmbeddableActionUserInterface

@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)performActionWithInput:(id)a0 inputConfiguration:(id)a1 socialServiceType:(id)a2 extensionBundleIdentifier:(id)a3 extensionUserInfo:(id)a4 completionHandler:(id /* block */)a5;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)addContentToShareController:(id)a0 withInput:(id)a1 inputConfiguration:(id)a2 extensionUserInfo:(id)a3 completionHandler:(id /* block */)a4;
- (id)contentItemClassesFromInputConfiguration:(id)a0;
- (id)inputContentItemClassesFromInputConfiguration:(id)a0;
- (void)finishWithContentCollection:(id)a0 error:(id)a1;

@end
