@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (nonatomic) BOOL isInitialSync;

- (id)copyMultiGetTaskWithURLs:(id)a0;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 context:(id)a4 accountInfoProvider:(id)a5 taskManager:(id)a6 appSpecificDataItemClass:(Class)a7;
- (Class)bulkChangeTaskClass;
- (id)dataContentType;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 syncItemOrder:(BOOL)a4 context:(id)a5 accountInfoProvider:(id)a6 taskManager:(id)a7 appSpecificDataItemClass:(Class)a8;
- (id)copyGetTaskWithURL:(id)a0;

@end
