@interface WFAppendFileAction : WFStorageServiceAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)contentDestinationWithError:(id *)a0;
- (BOOL)requiresRemoteExecution;
- (id)minimumSupportedClientVersion;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;
- (void)updatePathPrefix;

@end
