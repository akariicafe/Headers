@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (BOOL)containsKey:(id)a0;
- (void)checkinValues:(id)a0;
- (id)description;
- (id)checkoutValueForKey:(id)a0 creationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)containsValue:(id)a0;
- (BOOL)checkinValue:(id)a0;

@end
