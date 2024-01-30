@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (BOOL)containsValue:(id)a0;
- (id)checkoutValueForKey:(id)a0 creationBlock:(id /* block */)a1;
- (void)checkinValues:(id)a0;
- (id)init;
- (BOOL)checkinValue:(id)a0;
- (id)description;
- (BOOL)containsKey:(id)a0;
- (void).cxx_destruct;

@end
