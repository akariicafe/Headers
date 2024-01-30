@interface WFCreateFolderAction : WFStorageServiceAction

- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)filenamePlaceholderText;

@end
