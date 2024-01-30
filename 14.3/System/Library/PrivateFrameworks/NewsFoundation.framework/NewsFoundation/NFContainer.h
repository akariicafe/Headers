@class NSMutableDictionary, NFContainerPool, NFProxyResolver, NSString, NFCallbackStore;
@protocol NFResolver;

@interface NFContainer : NSObject <NFDefinitionContainer, NFRegistrationContainer>

@property (retain, nonatomic) NSMutableDictionary *definitions;
@property (retain, nonatomic) NFContainerPool *pool;
@property (retain, nonatomic) NFCallbackStore *callbackStore;
@property (retain, nonatomic) NSMutableDictionary *privateContainers;
@property (readonly, nonatomic) NFProxyResolver *proxyResolver;
@property (readonly, nonatomic) id<NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleAssemblies:(id)a0 assemblies:(id)a1;
- (id)register:(id)a0 createDefinitionBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)validateDefinitionsWithProxyResolver:(id)a0;
- (id)initWithBundleAssemblies:(id)a0 assemblies:(id)a1 singletonPool:(id)a2 bridgedContainer:(id)a3;
- (id)definitionForKey:(id)a0;
- (id)registerKey:(id)a0 factory:(id /* block */)a1;
- (id)unsafeRegisterForKey:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerClass:(Class)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerProtocol:(id)a0 factory:(id /* block */)a1;
- (id)registerClass:(Class)a0 factory:(id /* block */)a1;
- (id)initAsPrivateContainer;
- (id)registerProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;

@end
