@class NSMutableDictionary;

@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary *_mapTable;
}

+ (id)compoundObjectMap;
+ (id)generateKeyForObject:(id)a0 andProperty:(id)a1;

- (id)objectForKey:(id)a0;
- (void)removeAllMappings;
- (id)init;
- (void).cxx_destruct;
- (id)valueForObject:(id)a0 andProperty:(id)a1;
- (id)deepCopy;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forObject:(id)a1 andProperty:(id)a2;
- (void)performWithEach:(id /* block */)a0;

@end
