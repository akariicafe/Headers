@class NSString;

@interface WFSelectFilesUIKitUserInterface : WFEmbeddableActionUserInterface <WFFilePickerUserInterface, UIDocumentPickerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *consumingBundleID;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithResults:(id)a0 error:(id)a1;
- (void)retrieveFilesWithConsumingBundleID:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)supportedPickerContentTypesWithOptions:(unsigned long long)a0;

@end
