@interface AVCaptureMultiCamSession : AVCaptureSession {
    float _hardwareCost;
    float _systemPressureCost;
}

@property (class, readonly, nonatomic, getter=isMultiCamSupported) BOOL multiCamSupported;

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

- (id)init;
- (void)dealloc;
- (void)startRunning;
- (void)_removeConnection:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateCosts;
- (BOOL)_canAddConnection:(id)a0 failureReason:(id *)a1;
- (BOOL)_addConnection:(id)a0 exceptionReason:(id *)a1;
- (void)handleVideoInputDevice:(id)a0 activeFormatChanged:(id)a1;
- (void)_updateSystemPressureCost;
- (void)_updateHardwareCost;
- (id)_livePortSetsByDeviceInput;
- (BOOL)isOverCost:(id *)a0;
- (unsigned int)_computeMemoryUsageForOutputs;
- (float)_computeEncoderCostForOutputs;
- (id)_physicalDevicePowerInfoSet;
- (id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)a0 virtualDevice:(id)a1 constituentDevice:(id)a2;
- (BOOL)canSetSessionPreset:(id)a0;
- (BOOL)_canAddInput:(id)a0 failureReason:(id *)a1;
- (BOOL)_canAddOutput:(id)a0 failureReason:(id *)a1;

@end
