@interface ReusableTabManager : WBReusableTabManager

- (id)tabGroupManager;
- (void)enumerateReusableTabDocuments:(id /* block */)a0;
- (id)reusableTabDocumentWithUUID:(id)a0;
- (id)windowStates;
- (id)faviconForUUID:(id)a0;

@end
