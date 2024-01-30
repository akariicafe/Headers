@interface TeaFoundation.BridgedRegistrationContainer : NSObject <TFRegistrationContainer> {
    void /* unknown type, empty encoding */ registrationContainer;
}

- (id)registerProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerClass:(Class)a0 factory:(id /* block */)a1;
- (id)registerUncheckedProtocol:(id)a0 factory:(id /* block */)a1;
- (id)registerClass:(Class)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)registerUncheckedProtocol:(id)a0 name:(id)a1 factory:(id /* block */)a2;
- (id)init;
- (id)registerProtocol:(id)a0 factory:(id /* block */)a1;
- (void).cxx_destruct;

@end
