@interface ASFolderCreateTask : ASFolderLocalUpdateTask

- (void)_appendRequestBodyFolderDataToWBXMLData:(id)a0;
- (id)initWithFolder:(id)a0 previousSyncKey:(id)a1 completionBlock:(id /* block */)a2;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
