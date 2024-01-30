@interface NSFileProviderInPlaceExtension : NSFileProviderExtension

- (void)renameItemWithIdentifier:(id)a0 toName:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTagData:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setFavoriteRank:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)trashItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)untrashItemWithIdentifier:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)importDocumentAtURL:(id)a0 toParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)createDirectoryWithName:(id)a0 inParentItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)itemChangedAtURL:(id)a0;
- (void)startProvidingItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)persistentIdentifierForItemAtURL:(id)a0;
- (void)stopProvidingItemAtURL:(id)a0;
- (void)setLastUsedDate:(id)a0 forItemIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)providePlaceholderAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)URLForItemWithPersistentIdentifier:(id)a0;
- (void)reparentItemWithIdentifier:(id)a0 toParentItemWithIdentifier:(id)a1 newName:(id)a2 completionHandler:(id /* block */)a3;

@end
