@interface NSKeyValueProxyGetter : NSKeyValueGetter {
    Class _proxyClass;
}

- (Class)proxyClass;
- (id)initWithContainerClassID:(id)a0 key:(id)a1 proxyClass:(Class)a2;

@end
