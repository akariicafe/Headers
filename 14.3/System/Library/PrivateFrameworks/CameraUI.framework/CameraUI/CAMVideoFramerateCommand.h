@interface CAMVideoFramerateCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _videoConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVideoConfiguration:(long long)a0;

@end
