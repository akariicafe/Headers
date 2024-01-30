@interface PDFDetectedFormField : NSObject

@property long long kind;
@property long long index;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property long long numberOfSegments;
@property double segmentWidth;
@property (readonly, nonatomic) double minX;
@property (readonly, nonatomic) double maxX;

- (double)maxY;
- (double)minY;
- (BOOL)canBeMergedWith:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andKind:(long long)a1;

@end
