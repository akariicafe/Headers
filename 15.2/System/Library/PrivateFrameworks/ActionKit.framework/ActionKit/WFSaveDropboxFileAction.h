@protocol WFSaveDropboxFileActionUserInterface, WFFileStorageServiceOperation;

@interface WFSaveDropboxFileAction : WFStorageServiceAction

@property (retain, nonatomic) id<WFSaveDropboxFileActionUserInterface> actionUserInterface;
@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishRunningWithError:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filePathKey;
- (id)showPickerKey;
- (id)storageService;
- (void)runWithRemoteUserInterface:(id)a0 path:(id)a1 input:(id)a2 storageService:(id)a3;

@end
