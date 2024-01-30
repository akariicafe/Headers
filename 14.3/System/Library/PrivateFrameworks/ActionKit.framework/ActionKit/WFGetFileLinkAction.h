@interface WFGetFileLinkAction : WFStorageServiceInputAction

- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)uploadInput:(id)a0 storageService:(id)a1 useShortURL:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)uploadWorkflowRecords:(id)a0 completionHandler:(id /* block */)a1;

@end
