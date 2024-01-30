@protocol WFFileStorageServiceOperation;

@interface WFSaveFileAction : WFStorageServiceAction

@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)cancel;
- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (void)finishRunningWithError:(id)a0;
- (BOOL)inputsMultipleItems;
- (BOOL)isProgressIndeterminate;
- (id)minimumSupportedClientVersion;
- (BOOL)outputsMultipleItems;
- (BOOL)requiresRemoteExecution;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)filePathKey;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1 storageService:(id)a2 subpath:(id)a3;
- (void)runWithStorageService:(id)a0 directory:(id)a1 subpath:(id)a2 input:(id)a3;
- (id)showPickerKey;
- (void)updatePathPrefix;

@end
