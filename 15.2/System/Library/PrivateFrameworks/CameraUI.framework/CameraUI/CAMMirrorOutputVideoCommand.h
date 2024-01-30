@interface CAMMirrorOutputVideoCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isOutputMirrored) BOOL outputMirrored;

- (id)_debugStringForMirroringMethod:(long long)a0;
- (id)initWithOutputMirrored:(BOOL)a0;
- (id)_debugStringForSupportedMirroringMethods:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setVideoMirrored:(BOOL)a0 forOutput:(id)a1 requirePhysicalFlip:(BOOL)a2;

@end
