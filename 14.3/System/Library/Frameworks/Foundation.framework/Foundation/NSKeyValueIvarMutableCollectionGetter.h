@interface NSKeyValueIvarMutableCollectionGetter : NSKeyValueProxyGetter {
    struct objc_ivar { } *_ivar;
}

- (struct objc_ivar { } *)ivar;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 containerIsa:(Class)a2 ivar:(struct objc_ivar { } *)a3 proxyClass:(Class)a4;

@end
