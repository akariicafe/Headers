@class NSThread, WFClient, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface WFPersonalHotspotStateMonitor : NSObject

@property (retain, nonatomic) WFClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property NSRunLoop *callbackRunLoop;
@property (retain, nonatomic) NSThread *callbackThread;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_runManagerCallbackThread;
- (void)setMISDiscoveryState:(BOOL)a0 immediateDisable:(BOOL)a1;
- (void)asyncMISDiscoveryState:(id /* block */)a0;
- (void)_spawnManagerCallbackThread;

@end
