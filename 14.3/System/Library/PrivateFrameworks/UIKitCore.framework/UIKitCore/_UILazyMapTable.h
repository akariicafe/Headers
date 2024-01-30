@class NSMapTable;

@interface _UILazyMapTable : NSObject {
    id /* block */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (id)objectForKey:(id)a0;
- (id)keys;
- (void).cxx_destruct;
- (void)registerClient:(id)a0 ofObjectForKey:(id)a1;
- (id)description;
- (id)cachedObjects;
- (id)initWithMappingBlock:(id /* block */)a0;
- (BOOL)hasCachedObjectForKey:(id)a0;
- (unsigned long long)count;
- (void)unregisterClient:(id)a0 ofObjectForKey:(id)a1;
- (id)keyEnumerable;
- (id)cachedObjectEnumerable;

@end
