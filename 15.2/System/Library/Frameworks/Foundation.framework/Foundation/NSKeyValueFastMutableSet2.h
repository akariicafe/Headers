@class NSKeyValueGetter;

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}

- (id)objectEnumerator;
- (id)_nonNilSetValueWithSelector:(SEL)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;

@end
