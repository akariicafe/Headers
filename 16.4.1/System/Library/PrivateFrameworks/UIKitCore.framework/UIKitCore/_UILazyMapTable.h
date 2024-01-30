@class NSMapTable;

@interface _UILazyMapTable : NSObject {
    id /* block */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (id)initWithMappingBlock:(id /* block */)a0;
- (id)keys;
- (id)objectForKey:(id)a0;
- (void)registerClient:(id)a0 ofObjectForKey:(id)a1;
- (unsigned long long)count;
- (id)cachedObjectEnumerable;
- (id)cachedObjects;
- (id)keyEnumerable;
- (BOOL)hasCachedObjectForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)unregisterClient:(id)a0 ofObjectForKey:(id)a1;

@end
