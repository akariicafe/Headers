@class NSString, NSMutableDictionary, NFCallbackStore;

@interface NFContext : NSObject <NFContext>

@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) NFCallbackStore *callbackStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)whenUnsafeResolvingWithKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (id)mergeWithContext:(id)a0;
- (id)initWithCallbackStore:(id)a0;
- (void).cxx_destruct;
- (void)whenResolvingKey:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)whenResolvingClass:(Class)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (id)resolveForKey:(id)a0;
- (void)useObject:(id)a0 forProtocol:(id)a1;
- (void)useObject:(id)a0 forKey:(id)a1;
- (void)unsafeUseObject:(id)a0 forKey:(id)a1 name:(id)a2;
- (void)useObject:(id)a0 forClass:(Class)a1 name:(id)a2;
- (void)whenResolvingProtocol:(id)a0 scope:(id)a1 callbackBlock:(id /* block */)a2;
- (void)useObject:(id)a0 forClass:(Class)a1;
- (void)useObject:(id)a0 forProtocol:(id)a1 name:(id)a2;

@end
