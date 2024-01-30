@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGraphConfiguration:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
