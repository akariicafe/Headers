@interface CardDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup

- (id)initWithFolderURL:(id)a0 checkCTag:(id)a1 uuidsToAddActions:(id)a2 hrefsToModDeleteActions:(id)a3 context:(id)a4 accountInfoProvider:(id)a5 taskManager:(id)a6;
- (Class)multiPutTaskClass;

@end
