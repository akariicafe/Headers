@interface WFStorageServiceAction : WFAction

@property (readonly, nonatomic) BOOL showsFilePicker;

- (id)keywords;
- (BOOL)skipsProcessingHiddenParameters;
- (id)contentDestinationWithError:(id *)a0;
- (void)initializeParameters;
- (id)outputContentClasses;
- (id)prioritizedParameterKeysForRemoteExecution;
- (BOOL)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (BOOL)showsSettingsWhenResourcesUnavailable;
- (id)filePathKey;
- (id)filenamePlaceholderText;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)selectedStorageServiceChanged;
- (id)showPickerKey;
- (id)storageService;
- (void)updatePathPrefix;

@end
