@class NSThread, WFClient, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface WFPersonalHotspotStateMonitor : NSObject

@property (retain, nonatomic) WFClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property NSRunLoop *callbackRunLoop;
@property (retain, nonatomic) NSThread *callbackThread;

- (void)_runManagerCallbackThread;
- (void)_spawnManagerCallbackThread;
- (void)asyncMISDiscoveryState:(id /* block */)a0;
- (void)setMISDiscoveryState:(BOOL)a0 immediateDisable:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
