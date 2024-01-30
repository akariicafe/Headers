@interface VCPBoundingBox : NSObject

@property float minX;
@property float maxX;
@property float minY;
@property float maxY;
@property float confidence;
@property float flag;
@property int classIndex;

- (float)area;
- (id)union:(id)a0;
- (id)intersect:(id)a0;
- (id)initWithXYAndSize:(float)a0 y:(float)a1 width:(float)a2 height:(float)a3 confidence:(float)a4;
- (id)initWithCenterAndSize:(float)a0 y:(float)a1 width:(float)a2 height:(float)a3 confidence:(float)a4;
- (float)computeIntersectionOverUnion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCGRectWithClipWidth:(float)a0 height:(float)a1;

@end
