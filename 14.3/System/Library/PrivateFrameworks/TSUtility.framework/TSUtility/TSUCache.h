@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)unload;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithName:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (BOOL)hasFlushableContent;
- (id)p_objectForKey:(id)a0;
- (void)p_addEntriesFromDictionary:(id)a0;
- (id)p_objectsForKeys:(id)a0 notFoundMarker:(id)a1;

@end
