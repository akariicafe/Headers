@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
    NSMutableSet *_mutableSet;
}

+ (id)_proxyShare;

- (void)intersectSet:(id)a0;
- (void)setSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (id)objectEnumerator;
- (void)addObjectsFromArray:(id)a0;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)minusSet:(id)a0;

@end
