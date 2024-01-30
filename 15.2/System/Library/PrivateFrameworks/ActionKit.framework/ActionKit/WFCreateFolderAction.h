@interface WFCreateFolderAction : WFStorageServiceAction

- (BOOL)requiresRemoteExecution;
- (id)minimumSupportedClientVersion;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;
- (void)updatePathPrefix;

@end
