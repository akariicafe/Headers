@class TVLNetworkMonitor, TVLTimeSync, CUMessageSession, TVLNetworkInterface, TVLListenEngine;

@interface TVLAudioLatencyEstimator : NSObject

@property (nonatomic) float version;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) TVLNetworkMonitor *networkMonitor;
@property (retain, nonatomic) TVLNetworkInterface *awdlInterface;
@property (retain, nonatomic) TVLNetworkInterface *wifiInterface;
@property (retain, nonatomic) CUMessageSession *session;
@property (retain, nonatomic) TVLTimeSync *timeSync;
@property (retain, nonatomic) TVLListenEngine *listenEngine;
@property (copy, nonatomic) id /* block */ internalProgressEventHandler;
@property (readonly, nonatomic) unsigned long long role;
@property (copy, nonatomic) id /* block */ progressEventHandler;

- (void)_invalidateWithError:(id)a0;
- (void)_tearDown;
- (void)estimate;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithMessageSession:(id)a0;
- (void)_estimateAudioLatencyWithOptions:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_initWithMessageSession:(id)a0;
- (void)_postInternalProgressEvent:(unsigned long long)a0 withInfo:(id)a1;
- (void)_postProgressEvent:(unsigned long long)a0 withInfo:(id)a1;
- (void)_respondAndInvalidateWithError:(id)a0 responseHandler:(id /* block */)a1;
- (void)_sendMessage:(id)a0 withResponse:(id /* block */)a1;
- (void)_synchronizeClocksWithOptions:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)estimateAudioLatencyWithToneIdentifier:(id)a0;
- (id)networkInterfaceOfType:(unsigned long long)a0 fromInterfaces:(id)a1;
- (void)networkMonitorInterfacesDidUpdate:(id)a0;
- (void)setAudioLatencyEstimationCompletionHandler:(id /* block */)a0;
- (void)startNetworkMonitoring;

@end
