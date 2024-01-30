@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isBlinkDetectionEnabled) BOOL _blinkDetectionEnabled;
@property (readonly, nonatomic, getter=_isSmileDetectionEnabled) BOOL _smileDetectionEnabled;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlinkDetection:(BOOL)a0 smileDetection:(BOOL)a1;

@end
