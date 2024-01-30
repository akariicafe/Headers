@interface AMSBagCachedValueUpdateHandlers : NSObject {
    void /* unknown type, empty encoding */ handlerQueue;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) unsigned long long uninitializedToken;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)add:(id /* block */)a0 calledForKeys:(id)a1 initialValues:(id)a2;
- (void)callUpdateHandlersUsingNewBagDictionary:(id)a0 changedKeys:(id)a1;
- (id)initWithHandlerQueue:(id)a0;
- (void)removeHandlerWithToken:(unsigned long long)a0;

@end
