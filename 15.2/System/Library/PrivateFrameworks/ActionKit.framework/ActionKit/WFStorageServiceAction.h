@interface WFStorageServiceAction : WFAction

@property (readonly, nonatomic) BOOL showsFilePicker;

- (id)keywords;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (void)initializeParameters;
- (BOOL)skipsProcessingHiddenParameters;
- (id)contentDestinationWithError:(id *)a0;
- (BOOL)requiresRemoteExecution;
- (id)prioritizedParameterKeysForRemoteExecution;
- (BOOL)showsSettingsWhenResourcesUnavailable;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;
- (void)updatePathPrefix;
- (id)filePathKey;
- (id)showPickerKey;
- (id)storageService;
- (void)selectedStorageServiceChanged;

@end
