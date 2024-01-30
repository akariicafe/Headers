@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) double _videoZoomFactor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithVideoZoomFactor:(double)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
