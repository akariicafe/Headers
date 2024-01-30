@interface SSKeyValueStoreTransaction : SSKeyValueStoreSession

- (BOOL)setValue:(id)a0 forDomain:(id)a1 key:(id)a2;
- (void)removeAccountFromDomain:(id)a0;
- (BOOL)setData:(id)a0 forDomain:(id)a1 key:(id)a2;

@end
