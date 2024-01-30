@class NSString;
@protocol WFFileStorageServiceOperation;

@interface WFSaveDropboxFileActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFSaveDropboxFileActionUserInterface, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (id)selectedStorageServiceForName:(id)a0;
- (void)showWithServiceName:(id)a0 input:(id)a1 managedLevel:(unsigned long long)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
