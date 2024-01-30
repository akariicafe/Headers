@interface AppAnalytics.SessionManager : _TtCs12_SwiftObject <AAFlushable> {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ processorManager;
    void /* unknown type, empty encoding */ appSessionProvider;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ sessionGroupManager;
    void /* unknown type, empty encoding */ suspendCount;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ dataStacks;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ flushProcessor;
}

- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end
