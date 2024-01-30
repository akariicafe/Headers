@interface WFDeleteFileAction : WFStorageServiceInputAction

- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)confirmDeletionAtLevel:(unsigned long long)a0 withService:(id)a1 input:(id)a2;

@end
