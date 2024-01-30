@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) double _videoZoomFactor;
@property (readonly, nonatomic) float _rate;
@property (readonly, nonatomic) double _duration;
@property (readonly, nonatomic) long long _videoZoomRampTuning;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideoZoomFactor:(double)a0 duration:(double)a1 zoomRampTuning:(long long)a2;
- (id)initWithVideoZoomFactor:(double)a0 rate:(float)a1;

@end
