@class NSKeyValueNonmutatingCollectionMethodSet;

@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet *_methods;
}

- (id)initWithContainerClassID:(id)a0 key:(id)a1 methods:(id)a2 proxyClass:(Class)a3;
- (void)dealloc;
- (id)methods;

@end
