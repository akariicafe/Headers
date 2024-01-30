@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _captureRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithDefaultTimelapseCaptureRate;
- (id)initWithTimelapseCaptureRate:(float)a0;

@end
