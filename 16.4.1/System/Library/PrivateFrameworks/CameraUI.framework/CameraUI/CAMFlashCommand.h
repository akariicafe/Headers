@interface CAMFlashCommand : CAMCaptureCommand <NSCopying, NSCoding>

@property (readonly, nonatomic) long long _flashMode;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlashMode:(long long)a0;

@end
