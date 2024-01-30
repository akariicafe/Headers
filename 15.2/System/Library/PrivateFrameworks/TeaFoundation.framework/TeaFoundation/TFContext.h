@class NSString, NSMutableDictionary, TFCallbackStore;

@interface TFContext : NSObject <TFContext>

@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) TFCallbackStore *callbackStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)whenResolvingKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (id)initWithCallbackStore:(id)a0;
- (void)useObject:(id)a0 forKey:(id)a1;
- (void)useObject:(id)a0 forClass:(Class)a1;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)useObject:(id)a0 forProtocol:(id)a1 name:(id)a2;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)useObject:(id)a0 forClass:(Class)a1 name:(id)a2;
- (id)mergeWithContext:(id)a0;
- (id)resolveForKey:(id)a0;
- (void)unsafeUseObject:(id)a0 forKey:(id)a1 name:(id)a2;
- (void)whenUnsafeResolvingWithKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)useObject:(id)a0 forProtocol:(id)a1;

@end
