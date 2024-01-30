@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allValues;
- (id)allKeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
