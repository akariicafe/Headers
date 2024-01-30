@interface WFGetDropboxFileAction : WFStorageServiceAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)initializeParameters;
- (BOOL)isProgressIndeterminate;
- (BOOL)outputsMultipleItems;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)filePathKey;
- (id)filenamePlaceholderText;
- (BOOL)multipleSelectionEnabled;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)runWithRemoteUserInterface:(id)a0 path:(id)a1 input:(id)a2 storageService:(id)a3;
- (id)showPickerKey;
- (id)storageService;
- (void)updateVisibleParameters;

@end
