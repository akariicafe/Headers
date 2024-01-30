@interface CAMPanoramaEncodingCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _photoEncodingBehavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPhotoEncodingBehavior:(long long)a0;

@end
