@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (id)init;
- (void).cxx_destruct;
- (id)checkoutValueForKey:(id)a0 creationBlock:(id /* block */)a1;
- (BOOL)checkinValue:(id)a0;
- (id)description;
- (BOOL)containsValue:(id)a0;
- (void)checkinValues:(id)a0;
- (BOOL)containsKey:(id)a0;

@end
