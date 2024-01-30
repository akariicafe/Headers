@interface DCAtomicLRUCache : DCLRUCache

- (void)removeObjectForKey:(id)a0;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;

@end
