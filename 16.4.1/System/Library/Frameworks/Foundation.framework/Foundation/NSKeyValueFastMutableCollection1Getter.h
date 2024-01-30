@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueNonmutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {
    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (id)nonmutatingMethods;
- (void)dealloc;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 nonmutatingMethods:(id)a2 mutatingMethods:(id)a3 proxyClass:(Class)a4;
- (id)mutatingMethods;

@end
