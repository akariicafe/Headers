@class NSString, NFCallbackStore;
@protocol NFDefinitionContainer;

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration>

@property (readonly, nonatomic) NFCallbackStore *callbackStore;
@property (readonly, nonatomic) id<NFDefinitionContainer> privateContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)whenUnsafeResolvingWithKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithCallbackStore:(id)a0 privateContainer:(id)a1;
- (void)whenResolvingKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;

@end
