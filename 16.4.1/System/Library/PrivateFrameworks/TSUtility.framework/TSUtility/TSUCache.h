@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)unload;
- (id)p_objectForKey:(id)a0;
- (BOOL)hasFlushableContent;
- (void)p_addEntriesFromDictionary:(id)a0;
- (id)p_objectsForKeys:(id)a0 notFoundMarker:(id)a1;

@end
