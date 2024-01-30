@class UINavigationController, NSString;

@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFScanMachineReadableCodeActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithCode:(id)a0 error:(id)a1;

@end
