@class NSString, NSKeyValueNonmutatingSetMethodSet, NSObject;

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingSetMethodSet *_methods;
}

+ (id)_proxyShare;

- (id)objectEnumerator;
- (struct { id x0; id x1; })_proxyLocator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)member:(id)a0;

@end
