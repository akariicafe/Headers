@interface PXPlacesMapViewPort : NSObject <NSCopying>

@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } mapRect;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) double zoomLevel;
@property (nonatomic) double pitch;
@property (nonatomic) double scale;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 andViewSize:(struct CGSize { double x0; double x1; })a1 zoomLevel:(double)a2 pitch:(double)a3;
- (BOOL)isSpanning180thMerdian;
- (id)viewPortsBySplitingAt180thMerdian;

@end
