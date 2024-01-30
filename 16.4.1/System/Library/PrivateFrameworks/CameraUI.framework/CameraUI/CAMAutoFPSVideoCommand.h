@interface CAMAutoFPSVideoCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isAutoFPSVideoEnabled) BOOL autoFPSVideoEnabled;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAutoFPSVideoEnabled:(BOOL)a0;

@end
