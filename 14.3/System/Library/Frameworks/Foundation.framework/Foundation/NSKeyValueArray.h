@class NSString, NSKeyValueNonmutatingArrayMethodSet, NSObject;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}

+ (id)_proxyShare;

- (id)objectsAtIndexes:(id)a0;
- (void)dealloc;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;
- (id)objectAtIndex:(unsigned long long)a0;

@end
