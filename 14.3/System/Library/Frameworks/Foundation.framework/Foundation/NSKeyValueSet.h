@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (void)dealloc;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;

@end
