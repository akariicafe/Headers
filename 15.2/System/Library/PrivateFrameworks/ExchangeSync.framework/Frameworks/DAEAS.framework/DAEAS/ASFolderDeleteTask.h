@interface ASFolderDeleteTask : ASFolderLocalUpdateTask

- (long long)taskStatusForExchangeStatus:(int)a0;
- (id)initWithFolder:(id)a0 previousSyncKey:(id)a1 completionBlock:(id /* block */)a2;
- (void)_appendRequestBodyFolderDataToWBXMLData:(id)a0;

@end
