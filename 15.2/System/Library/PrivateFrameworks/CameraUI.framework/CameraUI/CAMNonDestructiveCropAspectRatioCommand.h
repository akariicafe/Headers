@interface CAMNonDestructiveCropAspectRatioCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _aspectRatioCrop;

- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubcommands:(id)a0;
- (id)initWithAspectRatioCrop:(long long)a0;

@end
