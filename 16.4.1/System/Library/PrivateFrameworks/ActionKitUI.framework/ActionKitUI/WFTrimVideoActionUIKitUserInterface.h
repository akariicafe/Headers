@class NSString, WFFileRepresentation;

@interface WFTrimVideoActionUIKitUserInterface : WFEmbeddableActionUserInterface <UIVideoEditorControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, WFTrimVideoActionUserInterface>

@property (retain, nonatomic) WFFileRepresentation *copiedFile;
@property (nonatomic) BOOL hasSaved;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)videoEditorControllerDidCancel:(id)a0;
- (void)videoEditorController:(id)a0 didFailWithError:(id)a1;
- (void)videoEditorController:(id)a0 didSaveEditedVideoToPath:(id)a1;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (id)copyFileToDealWithBadUIVideoEditorControllerSandboxHandling:(id)a0;
- (void)dismissEditor:(id)a0 completionHandler:(id /* block */)a1;
- (void)showWithVideo:(id)a0 completionHandler:(id /* block */)a1;

@end
