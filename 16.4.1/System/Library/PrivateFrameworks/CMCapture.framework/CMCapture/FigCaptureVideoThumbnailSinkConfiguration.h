@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (copy, nonatomic) NSArray *filters;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (int)sinkType;

@end
