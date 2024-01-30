@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (void)unload;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)initWithName:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (BOOL)hasFlushableContent;
- (id)p_objectForKey:(id)a0;
- (void)p_addEntriesFromDictionary:(id)a0;
- (id)p_objectsForKeys:(id)a0 notFoundMarker:(id)a1;

@end
