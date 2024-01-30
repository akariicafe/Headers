@class NSString, SidecarRequest, NSMutableArray, NSObject;
@protocol OS_dispatch_group, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureStillImageCaptureDelegate, ContinuityCaptureStreamDelegate, ContinuityCaptureControlDelegate;

@interface CMContinuityCaptureRemoteClient : CMContinuityCaptureClientBase <ContinuityCaptureEventDelegate> {
    id<ContinuityCaptureStreamDelegate> _streamDelegate;
    id<ContinuityCaptureControlDelegate> _controlDelegate;
    id<ContinuityCaptureAVCNegotiationDataDelegate> _avcNegotiationDelegate;
    id<ContinuityCaptureClockSynchronizationDelegate> _clockSynchronizationDelegate;
    id<ContinuityCaptureStillImageCaptureDelegate> _stillImageCaptureDelegate;
    SidecarRequest *_activeRequest;
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_group> *_sidecarActivationCompletionGroup;
    NSMutableArray *_connectionTimeoutLogs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugInfo;
- (void).cxx_destruct;
- (void)enqueueCommandForSelector:(long long)a0 args:(id)a1;
- (void)_didCaptureStillImage:(id)a0 entity:(long long)a1;
- (void)_enqueueCommandForSelector:(long long)a0 args:(id)a1;
- (void)_notifyCompletion;
- (void)_postEvent:(id)a0 entity:(long long)a1;
- (void)_synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (void)didCaptureStillImage:(id)a0 entity:(long long)a1;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (id)initWithRequest:(id)a0 mediaIdentifiers:(id)a1 streamDelegate:(id)a2 controlDelegate:(id)a3 avcNegotiationDelegate:(id)a4 clockSynchronizationDelegate:(id)a5 stillImageCaptureDelegate:(id)a6 queue:(id)a7;
- (void)logConnectionTimeout;
- (void)notifyCompletion;
- (BOOL)postCommandForSelector:(unsigned long long)a0 args:(id)a1;
- (void)postDataEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)postEvent:(id)a0 entity:(long long)a1;
- (void)setupSidecarStreams:(id /* block */)a0 earlyStreamCompletion:(id /* block */)a1 timeSyncClockCompletion:(id /* block */)a2 option:(unsigned long long)a3;
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (void)teardownSidecarStreams:(id)a0 completion:(id /* block */)a1;

@end
