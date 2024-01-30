@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (int)sinkType;
- (id)description;

@end
