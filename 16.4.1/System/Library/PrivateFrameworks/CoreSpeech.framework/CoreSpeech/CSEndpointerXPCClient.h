@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSEndpointerXPCClient : CSEndpointerProxy <CSEndpointerXPCServiceDelegate> {
    id<CSEndpointAnalyzerDelegate> _endpointerDelegate;
}

@property (retain, nonatomic) NSXPCConnection *endpointerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (void)setActiveChannel:(unsigned long long)a0;
- (void)updateEndpointerThreshold:(float)a0;
- (void)setEndpointerDelegate:(id)a0;
- (void)setEndWaitTime:(double)a0;
- (id)endpointerModelVersion;
- (id)endpointerDelegate;
- (void)setEndpointerOperationMode:(long long)a0;
- (void)processServerEndpointFeatures:(id)a0;
- (void)setStartWaitTime:(double)a0;
- (double)elapsedTimeWithNoSpeech;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)a0;
- (id)_getRemoteServiceProxyObject;
- (unsigned long long)endPointAnalyzerType;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)dealloc;
- (void)recordingStoppedForReason:(long long)a0;
- (id)init;
- (void)didDetectHardEndpointAtTime:(double)a0 withMetrics:(id)a1;
- (void)didDetectStartpointAtTime:(double)a0;
- (void).cxx_destruct;
- (void)_createClientConnection;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;

@end
