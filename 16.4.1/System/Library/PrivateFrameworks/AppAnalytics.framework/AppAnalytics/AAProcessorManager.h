@interface AAProcessorManager : NSObject <AAFlushable> {
    void /* unknown type, empty encoding */ processorManager;
}

- (void)addEventProcessor:(id)a0;
- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)removeEventProcessor:(id)a0;
- (void)resumeBackgroundProcessingForIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
