@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (retain, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (retain, nonatomic) struct OpaqueCMClock { } *clock;
@property (nonatomic) int sourceSubType;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
