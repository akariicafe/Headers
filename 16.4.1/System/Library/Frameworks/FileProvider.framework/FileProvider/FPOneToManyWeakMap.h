@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (void)addObject:(id)a0 forKey:(id)a1;
- (id)removeObject:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)anyObjectForKey:(id)a0;

@end
