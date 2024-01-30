@class NSString, NSKeyValueNonmutatingArrayMethodSet, NSObject;

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}

+ (id)_proxyShare;

- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct { id x0; id x1; })_proxyLocator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (void)dealloc;

@end
