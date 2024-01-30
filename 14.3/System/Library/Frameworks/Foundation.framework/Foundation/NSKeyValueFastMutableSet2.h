@class NSKeyValueGetter;

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}

- (id)member:(id)a0;
- (id)_nonNilSetValueWithSelector:(SEL)a0;
- (id)objectEnumerator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;

@end
