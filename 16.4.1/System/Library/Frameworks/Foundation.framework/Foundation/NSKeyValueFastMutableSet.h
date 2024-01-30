@class NSKeyValueMutatingSetMethodSet;

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
    NSKeyValueMutatingSetMethodSet *_mutatingMethods;
}

- (void)addObject:(id)a0;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)removeObject:(id)a0;
- (void)intersectSet:(id)a0;
- (void)unionSet:(id)a0;
- (void)removeAllObjects;
- (void)setSet:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)minusSet:(id)a0;

@end
