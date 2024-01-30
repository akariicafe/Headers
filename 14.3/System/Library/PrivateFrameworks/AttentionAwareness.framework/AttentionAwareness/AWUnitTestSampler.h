@class NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface AWUnitTestSampler : NSObject <AWUnitTestSampler> {
    id<NSXPCProxyCreating> _remoteSamplerProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedSampler;

- (id)connect;
- (id)init;
- (void).cxx_destruct;
- (id)_connect;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)setDisplayCallback:(id /* block */)a0;
- (void)setDisplayState:(BOOL)a0;
- (void)getStatsWithBlock:(id /* block */)a0;
- (void)resetStats;
- (void)setSampleState:(BOOL)a0;
- (void)setSampleState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1 reply:(id /* block */)a2;
- (void)setDisplayState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverClosed:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverCallback:(id /* block */)a0;
- (void)setPearlErrorState:(BOOL)a0;
- (void)setPearlErrorState:(BOOL)a0 reply:(id /* block */)a1;
- (id)invokeSampler:(id /* block */)a0;

@end
