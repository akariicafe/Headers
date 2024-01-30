@interface AVCaptureMultiCamSession : AVCaptureSession {
    float _hardwareCost;
    float _systemPressureCost;
}

@property (class, readonly, nonatomic, getter=isMultiCamSupported) BOOL multiCamSupported;

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

- (void)_removeConnection:(id)a0;
- (void)startRunning;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)_canAddConnection:(id)a0 failureReason:(id *)a1;
- (BOOL)_addConnection:(id)a0 exceptionReason:(id *)a1;
- (void)_updateCosts;
- (void)handleVideoInputDevice:(id)a0 activeFormatChanged:(id)a1;
- (void)_updateSystemPressureCost;
- (void)_updateHardwareCost;
- (id)_livePortSetsByDeviceInput;
- (float)_computeNANDCostForOutputs;
- (unsigned int)_computeMemoryUsageForOutputs;
- (float)_computeEncoderCostForOutputs;
- (float)_nandCostWithFormatWidth:(int)a0 height:(int)a1 maxFrameRate:(float)a2;
- (id)_physicalDevicePowerInfoSet;
- (BOOL)canSetSessionPreset:(id)a0;
- (BOOL)_canAddInput:(id)a0 failureReason:(id *)a1;
- (BOOL)_canAddOutput:(id)a0 failureReason:(id *)a1;
- (BOOL)isOverCost:(id *)a0;

@end
