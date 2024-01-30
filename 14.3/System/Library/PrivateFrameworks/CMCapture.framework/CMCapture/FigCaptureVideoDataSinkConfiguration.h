@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL derivedFromPreview;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
