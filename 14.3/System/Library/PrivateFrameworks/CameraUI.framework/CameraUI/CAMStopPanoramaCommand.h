@interface CAMStopPanoramaCommand : CAMCaptureCommand

@property (readonly, nonatomic) BOOL _interrupted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInterrupted:(BOOL)a0;

@end
