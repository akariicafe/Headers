@interface DCAtomicLRUCache : DCLRUCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)allKeys;

@end
