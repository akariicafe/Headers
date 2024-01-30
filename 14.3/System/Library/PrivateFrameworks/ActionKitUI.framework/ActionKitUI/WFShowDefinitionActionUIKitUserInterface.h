@class NSString;

@interface WFShowDefinitionActionUIKitUserInterface : WFActionUserInterface <WFReferenceLibraryViewControllerDelegate, WFShowDefinitionActionUserInterface, UIAdaptivePresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)showWithString:(id)a0 completionHandler:(id /* block */)a1;
- (void)libraryControllerDidDismiss:(id)a0;

@end
