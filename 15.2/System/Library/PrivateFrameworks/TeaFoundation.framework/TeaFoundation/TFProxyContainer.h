@class NSString, TFContainer;

@interface TFProxyContainer : NSObject <TFRegistrationContainer>

@property (retain, nonatomic) TFContainer *container;
@property (retain, nonatomic) TFContainer *privateContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registerClass:(Class)a0 factory:(id /* block */)a1;
- (id)unsafeRegisterForKey:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (void).cxx_destruct;
- (id)registerClass:(Class)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerProtocol:(id)a0 factory:(id /* block */)a1;
- (id)registerKey:(id)a0 factory:(id /* block */)a1;
- (id)initWithContainer:(id)a0 privateContainer:(id)a1;
- (id)registerProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;

@end
