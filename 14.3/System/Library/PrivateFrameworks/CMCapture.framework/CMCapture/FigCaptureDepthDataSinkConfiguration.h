@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateDepthData;
@property (nonatomic) BOOL filteringEnabled;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
