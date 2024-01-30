@class CAMVideoThumbnailOutputConfiguration;

@interface CAMVideoThumbnailOutputConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *configuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
