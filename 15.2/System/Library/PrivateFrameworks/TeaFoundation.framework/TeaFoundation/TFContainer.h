@class NSMutableDictionary, TFContainerPool, NSString, TFCallbackStore, TFProxyResolver;
@protocol TFResolver;

@interface TFContainer : NSObject <TFDefinitionContainer, TFRegistrationContainer>

@property (retain, nonatomic) NSMutableDictionary *definitions;
@property (retain, nonatomic) TFContainerPool *pool;
@property (retain, nonatomic) TFCallbackStore *callbackStore;
@property (retain, nonatomic) NSMutableDictionary *privateContainers;
@property (readonly, nonatomic) TFProxyResolver *proxyResolver;
@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleAssemblies:(id)a0 assemblies:(id)a1 singletonPool:(id)a2 bridgedContainer:(id)a3;
- (id)definitionForKey:(id)a0;
- (id)registerClass:(Class)a0 factory:(id /* block */)a1;
- (id)unsafeRegisterForKey:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)initWithBundleAssemblies:(id)a0 assemblies:(id)a1;
- (void).cxx_destruct;
- (id)initAsPrivateContainer;
- (id)registerClass:(Class)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)init;
- (id)registerProtocol:(id)a0 factory:(id /* block */)a1;
- (id)registerKey:(id)a0 factory:(id /* block */)a1;
- (void)validateDefinitionsWithProxyResolver:(id)a0;
- (id)register:(id)a0 createDefinitionBlock:(id /* block */)a1;
- (id)registerProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;

@end
