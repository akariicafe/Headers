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

- (void)_runManagerCallbackThread;
- (void)_spawnManagerCallbackThread;
- (void)startMonitoring;
- (void)_updateState:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopMonitoring;
- (void)dealloc;
- (void)_updateState;
- (id)initWithClient:(id)a0 handler:(id /* block */)a1;
- (void)_powerStateDidChange:(id)a0;
- (void)_clientConnectionRestarted:(id)a0;
- (void)_interfaceBecameAvailable:(id)a0;
- (void)_autoJoinStateChanged:(id)a0;
- (void)_registerInterfaceObserversForInterface:(id)a0;
- (void)_hostAPStateChanged:(id)a0;
- (void)_linkDidChange:(id)a0;
- (void)_linkQualityDidChange:(id)a0;
- (void)_outrankStateDidChange:(id)a0;
- (void)_notifyStateChanged:(long long)a0 newState:(long long)a1;

@end
