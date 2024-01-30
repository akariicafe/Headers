@class NSKeyValueNonmutatingSetMethodSet;

@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet {
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}

- (id)member:(id)a0;
- (id)objectEnumerator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;

@end
