@class NSString;

@interface WFShareActionUIKitUserInterface : WFActionUserInterface <WFShareActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)excludedActivityTypes;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithItems:(id)a0 usesExtensionItems:(BOOL)a1 isContentManaged:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)presentItems:(id)a0 isContentManaged:(BOOL)a1;
- (void)finishWithExtensionItems:(id)a0 error:(id)a1;
- (void)prewarmInput:(id)a0 completion:(id /* block */)a1;

@end
