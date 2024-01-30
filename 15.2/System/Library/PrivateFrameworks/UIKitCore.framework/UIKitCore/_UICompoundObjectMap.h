@class NSMutableDictionary;

@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary *_mapTable;
}

+ (id)compoundObjectMap;
+ (id)generateKeyForObject:(id)a0 andProperty:(id)a1;

- (void)setValue:(id)a0 forObject:(id)a1 andProperty:(id)a2;
- (void)performWithEach:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllMappings;
- (void).cxx_destruct;
- (id)init;
- (id)deepCopy;
- (id)valueForObject:(id)a0 andProperty:(id)a1;
- (id)objectForKey:(id)a0;

@end
