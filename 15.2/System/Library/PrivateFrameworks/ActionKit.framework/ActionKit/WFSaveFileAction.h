@protocol WFFileStorageServiceOperation;

@interface WFSaveFileAction : WFStorageServiceAction

@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishRunningWithError:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)requiresRemoteExecution;
- (id)minimumSupportedClientVersion;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)updatePathPrefix;
- (void)runWithStorageService:(id)a0 directory:(id)a1 subpath:(id)a2 input:(id)a3;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1 storageService:(id)a2 subpath:(id)a3;
- (id)filePathKey;
- (id)showPickerKey;

@end
