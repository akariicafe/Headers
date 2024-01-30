@interface AppAnalytics.LazyEventProcessor : _TtCs12_SwiftObject <AAFlushable> {
    void /* unknown type, empty encoding */ processorProvider;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ loadedLazyProcessors;
}

- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end
