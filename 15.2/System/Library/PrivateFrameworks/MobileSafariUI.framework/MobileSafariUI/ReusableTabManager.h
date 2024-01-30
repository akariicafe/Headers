@interface ReusableTabManager : WBReusableTabManager

- (id)windowStates;
- (id)tabGroupManager;
- (void)enumerateReusableTabDocuments:(id /* block */)a0;
- (id)faviconForUUID:(id)a0;
- (id)reusableTabDocumentWithUUID:(id)a0;

@end
