@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL quadraHighResCaptureEnabled;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (int)sinkType;
- (id)description;

@end
