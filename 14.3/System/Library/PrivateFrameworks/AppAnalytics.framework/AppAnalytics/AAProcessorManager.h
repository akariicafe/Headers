@interface AAProcessorManager : NSObject <AAFlushable> {
    void /* unknown type, empty encoding */ processorManager;
}

- (void)removeEventProcessor:(id)a0;
- (void)resumeBackgroundProcessingForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)addEventProcessor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
