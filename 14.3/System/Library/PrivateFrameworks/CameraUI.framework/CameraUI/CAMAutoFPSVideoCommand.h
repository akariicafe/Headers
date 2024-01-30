@interface CAMAutoFPSVideoCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isAutoFPSVideoEnabled) BOOL autoFPSVideoEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAutoFPSVideoEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
