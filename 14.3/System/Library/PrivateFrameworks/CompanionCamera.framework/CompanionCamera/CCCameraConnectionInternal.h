@class CCCameraConnection;

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol>

@property (weak, nonatomic) CCCameraConnection *parent;

- (oneway void)xpc_suspend;
- (oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)a0 reply:(id /* block */)a1;
- (oneway void)xpc_setFlashMode:(long long)a0;
- (oneway void)xpc_setCaptureMode:(long long)a0 reply:(id /* block */)a1;
- (oneway void)xpc_setHDRMode:(long long)a0;
- (oneway void)xpc_endBurstCaptureWithReply:(id /* block */)a0;
- (oneway void)xpc_setFocusPoint:(id)a0;
- (oneway void)xpc_toggleCameraDevice;
- (oneway void)xpc_beginBurstCaptureWithReply:(id /* block */)a0;
- (oneway void)xpc_setZoom:(float)a0 reply:(id /* block */)a1;
- (oneway void)xpc_setIrisMode:(long long)a0;
- (oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)a0 reply:(id /* block */)a1;
- (void)takePhotoWithCountdown:(unsigned long long)a0;
- (void).cxx_destruct;
- (oneway void)xpc_stopCaptureWithReply:(id /* block */)a0;
- (oneway void)xpc_setCaptureDevice:(long long)a0 reply:(id /* block */)a1;
- (oneway void)xpc_startCaptureWithMode:(long long)a0 reply:(id /* block */)a1;
- (oneway void)xpc_setPreviewEndpoint:(id)a0;
- (oneway void)xpc_cancelCountdown;

@end
