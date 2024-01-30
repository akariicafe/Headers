@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithGraphConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
