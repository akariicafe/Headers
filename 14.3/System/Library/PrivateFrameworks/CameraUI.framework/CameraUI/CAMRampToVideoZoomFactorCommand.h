@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) double _videoZoomFactor;
@property (readonly, nonatomic) float _rate;
@property (readonly, nonatomic) double _duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVideoZoomFactor:(double)a0 rate:(float)a1;
- (id)initWithVideoZoomFactor:(double)a0 duration:(double)a1;

@end
