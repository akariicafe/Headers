@class SFService, SFSession, NSObject, TVLDisplayColorCalibrator;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVColorCalibratorService : NSObject {
    BOOL _eventFinalDelivered;
    BOOL _finished;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFService *_sfService;
    SFSession *_sfSession;
    TVLDisplayColorCalibrator *_tvColorCalibrator;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)_reportProgress:(unsigned int)a0 info:(id)a1;
- (void)_handleTVLatencyRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTVColorCalibratorProgressEvent:(unsigned long long)a0 info:(id)a1;
- (void)sendSetupAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleSessionStarted:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)invalidate;

@end
