@interface CAMColorSpaceCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _colorSpace;

- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColorSpace:(long long)a0;

@end
