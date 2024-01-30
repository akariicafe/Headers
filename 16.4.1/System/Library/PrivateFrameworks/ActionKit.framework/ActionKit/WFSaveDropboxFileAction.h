@protocol WFSaveDropboxFileActionUserInterface, WFFileStorageServiceOperation;

@interface WFSaveDropboxFileAction : WFStorageServiceAction

@property (retain, nonatomic) id<WFSaveDropboxFileActionUserInterface> actionUserInterface;
@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)cancel;
- (void).cxx_destruct;
- (void)finishRunningWithError:(id)a0;
- (BOOL)inputsMultipleItems;
- (BOOL)isProgressIndeterminate;
- (BOOL)outputsMultipleItems;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)filePathKey;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)runWithRemoteUserInterface:(id)a0 path:(id)a1 input:(id)a2 storageService:(id)a3;
- (id)showPickerKey;
- (id)storageService;

@end
