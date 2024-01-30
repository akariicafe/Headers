@interface CAMStopPanoramaCommand : CAMCaptureCommand

@property (readonly, nonatomic) BOOL _interrupted;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInterrupted:(BOOL)a0;

@end
