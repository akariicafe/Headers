@class NSMapTable;

@interface _UILazyMapTable : NSObject {
    id /* block */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (id)keyEnumerable;
- (void)registerClient:(id)a0 ofObjectForKey:(id)a1;
- (id)keys;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMappingBlock:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)cachedObjects;
- (unsigned long long)count;
- (BOOL)hasCachedObjectForKey:(id)a0;
- (id)cachedObjectEnumerable;
- (void)unregisterClient:(id)a0 ofObjectForKey:(id)a1;

@end
