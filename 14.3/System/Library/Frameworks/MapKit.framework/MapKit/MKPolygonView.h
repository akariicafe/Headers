@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView

@property (readonly, nonatomic) MKPolygon *polygon;

- (void)fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithPolygon:(id)a0;
- (void)createPath;

@end
