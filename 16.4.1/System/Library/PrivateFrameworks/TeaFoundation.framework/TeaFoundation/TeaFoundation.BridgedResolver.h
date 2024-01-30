@interface TeaFoundation.BridgedResolver : NSObject <TFResolver> {
    void /* unknown type, empty encoding */ resolver;
}

- (id)resolveClass:(Class)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)resolveClass:(Class)a0 name:(id)a1;
- (id)resolveProtocol:(id)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)resolveOptionalClass:(Class)a0 contextBlock:(id /* block */)a1;
- (id)resolveClass:(Class)a0;
- (id)resolveOptionalProtocol:(id)a0;
- (id)resolveOptionalClass:(Class)a0;
- (id)resolveOptionalClass:(Class)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)resolveOptionalClass:(Class)a0 name:(id)a1;
- (id)resolveOptionalProtocol:(id)a0 name:(id)a1 contextBlock:(id /* block */)a2;
- (id)resolveProtocol:(id)a0 contextBlock:(id /* block */)a1;
- (id)resolveProtocol:(id)a0;
- (id)init;
- (id)resolveOptionalProtocol:(id)a0 contextBlock:(id /* block */)a1;
- (id)resolveOptionalProtocol:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)resolveClass:(Class)a0 contextBlock:(id /* block */)a1;
- (id)resolveProtocol:(id)a0 name:(id)a1;

@end
