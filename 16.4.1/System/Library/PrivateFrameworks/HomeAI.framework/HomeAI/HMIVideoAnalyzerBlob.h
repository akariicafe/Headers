@interface HMIVideoAnalyzerBlob : HMFObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeStamp;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) float blobArea;
@property (readonly) unsigned short blobID;

- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 blobArea:(float)a2 blobID:(unsigned short)a3;

@end
