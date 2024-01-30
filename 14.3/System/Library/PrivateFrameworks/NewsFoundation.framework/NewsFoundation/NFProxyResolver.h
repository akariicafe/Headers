@class NSString, NFContainerPool, NFCallbackStore, NFContext;
@protocol NFDefinitionContainer;

@interface NFProxyResolver : NSObject <NFResolver, NFValidationResolver>

@property (retain, nonatomic) id<NFDefinitionContainer> publicContainer;
@property (retain, nonatomic) id<NFDefinitionContainer> privateContainer;
@property (retain, nonatomic) NFContainerPool *pool;
@property (readonly, nonatomic) NFCallbackStore *callbackStore;
@property (retain, nonatomic) NFContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resolveClass:(Class)a0 name:(id)a1;
- (id)resolveProtocol:(id)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)currentObjectGraphResolver:(unsigned long long)a0;
- (void)ensureClass:(Class)a0 name:(id)a1;
- (void)ensureProtocol:(id)a0;
- (id)resolveProtocol:(id)a0 contextBlock:(id /* block */)a1;
- (id)resolveClass:(Class)a0;
- (void)ensureClass:(Class)a0;
- (id)resolveForKey:(id)a0 context:(id)a1 error:(id *)a2;
- (id)resolveClass:(Class)a0 contextBlock:(id /* block */)a1;
- (void)linkResolverWithLinkBlock:(id /* block */)a0;
- (id)resolveClass:(Class)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)resolveForKey:(id)a0;
- (id)initWithPublicContainer:(id)a0 privateContainer:(id)a1 inPool:(id)a2 callbackStore:(id)a3;
- (id)contextWithContextBlock:(id /* block */)a0;
- (id)resolveForKey:(id)a0 context:(id)a1;
- (id)resolveForKey:(id)a0 context:(id)a1 validateBlock:(id /* block */)a2;
- (void)ensureProtocol:(id)a0 name:(id)a1;
- (id)resolveProtocol:(id)a0 name:(id)a1;
- (void)ensure:(id)a0;
- (id)resolveProtocol:(id)a0;
- (id)createProxyResolverForPrivateContainer:(id)a0;

@end
