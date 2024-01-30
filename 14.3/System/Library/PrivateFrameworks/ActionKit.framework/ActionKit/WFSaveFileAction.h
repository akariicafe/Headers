@protocol WFSaveFileActionUserInterface, WFFileStorageServiceOperation;

@interface WFSaveFileAction : WFStorageServiceAction

@property (retain, nonatomic) id<WFSaveFileActionUserInterface> actionUserInterface;
@property (retain, nonatomic) id<WFFileStorageServiceOperation> saveOperation;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)cancel;
- (void).cxx_destruct;
- (void)finishRunningWithError:(id)a0;
- (id)targetContentAttribution;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filePathKey;
- (id)showPickerKey;
- (void)runWithRemoteUserInterface:(id)a0 path:(id)a1 input:(id)a2 storageService:(id)a3;

@end
