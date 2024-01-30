@interface OITSUAtomicLRUCache : OITSULRUCache

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
