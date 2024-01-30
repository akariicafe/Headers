@class NSDictionary, PVImageBuffer;

@interface JFXCachedAnimojiImage : NSObject

@property (readonly, nonatomic) PVImageBuffer *animojiImageBuffer;
@property (readonly, nonatomic) NSDictionary *animojiRenderAttributes;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } mediaTimeRange;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 animojiRenderingAttributes:(id)a1 animojiImageBuffer:(id)a2;

@end
