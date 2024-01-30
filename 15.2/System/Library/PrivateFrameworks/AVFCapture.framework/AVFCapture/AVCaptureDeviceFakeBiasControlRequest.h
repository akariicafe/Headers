@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest

@property (nonatomic) float fakeBias;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fakeBiasCompletionTime;

@end
