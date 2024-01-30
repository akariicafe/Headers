@interface CAMTimelapseCaptureRateCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _captureRate;

- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaultTimelapseCaptureRate;
- (id)initWithTimelapseCaptureRate:(float)a0;

@end
