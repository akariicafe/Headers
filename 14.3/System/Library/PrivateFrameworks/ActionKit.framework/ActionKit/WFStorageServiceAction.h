@protocol WFFileStorageService;

@interface WFStorageServiceAction : WFAction

@property (readonly, nonatomic) id<WFFileStorageService> selectedStorageService;
@property (readonly, nonatomic) BOOL showsFilePicker;

- (id)keywords;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (BOOL)requiresRemoteExecution;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)targetContentAttribution;
- (id)requiredResources;
- (BOOL)showsSettingsWhenResourcesUnavailable;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;
- (void)updatePathPrefix;
- (id)filePathKey;
- (id)showPickerKey;
- (void)selectedStorageServiceChanged;

@end
