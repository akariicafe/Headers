@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL quadraHighResCaptureEnabled;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
