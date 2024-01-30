@class NSString, TFCallbackStore;
@protocol TFDefinitionContainer;

@interface TFCallbackRegistration : NSObject <TFCallbackRegistration>

@property (readonly, nonatomic) TFCallbackStore *callbackStore;
@property (readonly, nonatomic) id<TFDefinitionContainer> privateContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallbackStore:(id)a0 privateContainer:(id)a1;
- (void)whenResolvingKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenUnsafeResolvingWithKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;

@end
