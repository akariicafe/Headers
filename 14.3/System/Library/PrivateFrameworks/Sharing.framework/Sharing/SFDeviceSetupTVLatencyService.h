@class SFService, SFSession, NSObject, TVLAudioLatencyEstimator;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVLatencyService : NSObject {
    BOOL _eventFinalDelivered;
    BOOL _finished;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFService *_sfService;
    SFSession *_sfSession;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_sfServiceStart;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)a0 info:(id)a1;
- (void)_handleTVLatencyRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)activate;
- (void)_handleSessionEnded:(id)a0;
- (void)_invalidate;
- (void)sendSetupAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleSessionStarted:(id)a0;
- (void)invalidate;

@end
