@interface CAMPanoramaPaintingStatus : NSObject

@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRectangle;
@property (readonly, nonatomic) double normalizedBaselineOffset;

- (id)initWithSpeed:(double)a0 cropRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 normalizedBaselineOffset:(double)a2;

@end
