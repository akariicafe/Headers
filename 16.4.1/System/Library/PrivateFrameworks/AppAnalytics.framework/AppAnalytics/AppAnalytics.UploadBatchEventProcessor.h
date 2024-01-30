@interface AppAnalytics.UploadBatchEventProcessor : _TtCs12_SwiftObject <AAFlushable> {
    void /* unknown type, empty encoding */ uploadManager;
    void /* unknown type, empty encoding */ currentSession;
    void /* unknown type, empty encoding */ isEnabled;
}

- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end
