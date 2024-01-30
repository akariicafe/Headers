@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (copy, nonatomic) NSArray *filters;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
