@interface CAMVideoLivePhotoMetadataWritingEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isLivePhotoMetadataWritingEnabled) BOOL _livePhotoMetadataWritingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithEnabled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
