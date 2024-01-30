@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    char _padding[3];
}

- (void)intersectSet:(id)a0;
- (id)_createMutableSetValueWithSelector:(SEL)a0;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;
- (void)setSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (id)objectEnumerator;
- (void)addObjectsFromArray:(id)a0;
- (id)_setValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)minusSet:(id)a0;

@end
