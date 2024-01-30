@class AVCaptureConnection, AVCaptureDevice, AVCaptureVideoDataOutput;

@interface CMContinuityCaptureRemoteDeskcamVideoDevice : CMContinuityCaptureRemoteVideoDevice {
    BOOL _avCaptureSessionStarted;
    BOOL _prewarmed;
    AVCaptureVideoDataOutput *_videoDataOutput;
}

@property (readonly, retain) AVCaptureConnection *videoDataConnection;
@property (readonly, retain) AVCaptureDevice *deskViewCamera;

- (void).cxx_destruct;
- (BOOL)streaming;
- (void)_startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (BOOL)_configureWithConfiguration:(id)a0 error:(id *)a1;
- (id)_createConnectionsForPrewarming:(BOOL)a0;
- (void)_stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_throttleFrameRateByThermalLevelPowerMode;
- (void)_unthrottleFrameRateByThermalLevelPowerMode;
- (void)_updateActiveMaxFrameRate:(unsigned int)a0;
- (void)_updateActiveMinFrameRate:(unsigned int)a0;
- (id)createConnectionsForPrewarming;
- (id)initWithCompositeDevice:(id)a0 entity:(long long)a1 capabilities:(id)a2 client:(id)a3;
- (id)removePrewarmedConnectionsIfNeeded;

@end
