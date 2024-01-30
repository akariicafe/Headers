@class NSRunLoop, NSThread, WFNetworkScanRecord, WFClient, NSObject, WFLinkQuality;
@protocol OS_dispatch_queue;

@interface WFWiFiStateMonitor : NSObject

@property (nonatomic) long long state;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (copy, nonatomic) WFLinkQuality *linkQuality;
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork;
@property BOOL monitoring;
@property BOOL associatedToCarPlayOnly;
@property (retain, nonatomic) WFClient *client;
@property NSRunLoop *callbackRunLoop;
@property (retain, nonatomic) NSThread *callbackThread;
@property (copy) id /* block */ handler;

- (void)startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)_powerStateDidChange:(id)a0;
- (void)_updateState:(id /* block */)a0;
- (void)dealloc;
- (void)_runManagerCallbackThread;
- (void)_updateState;
- (void)stopMonitoring;
- (void)_spawnManagerCallbackThread;
- (id)initWithClient:(id)a0 handler:(id /* block */)a1;
- (void)_clientConnectionRestarted:(id)a0;
- (void)_interfaceBecameAvailable:(id)a0;
- (void)_autoJoinStateChanged:(id)a0;
- (void)_registerInterfaceObserversForInterface:(id)a0;
- (void)_hostAPStateChanged:(id)a0;
- (void)_linkDidChange:(id)a0;
- (void)_linkQualityDidChange:(id)a0;
- (void)_notifyStateChanged:(long long)a0 newState:(long long)a1;

@end
