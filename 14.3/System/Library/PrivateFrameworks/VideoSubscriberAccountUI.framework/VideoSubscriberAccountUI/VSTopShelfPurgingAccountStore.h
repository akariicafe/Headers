@interface VSTopShelfPurgingAccountStore : VSAccountStore

- (void)saveAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAccounts:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_purgeTopShelfContent;

@end
