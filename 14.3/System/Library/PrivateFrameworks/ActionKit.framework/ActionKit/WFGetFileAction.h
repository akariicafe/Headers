@interface WFGetFileAction : WFStorageServiceAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)targetContentAttribution;
- (BOOL)outputsMultipleItems;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;
- (id)filePathKey;
- (id)showPickerKey;
- (void)selectedStorageServiceChanged;
- (void)runWithRemoteUserInterface:(id)a0 path:(id)a1 input:(id)a2 storageService:(id)a3;
- (BOOL)multipleSelectionEnabled;
- (void)updateVisibleParameters;

@end
