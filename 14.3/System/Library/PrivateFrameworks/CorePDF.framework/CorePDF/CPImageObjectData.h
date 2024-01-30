@interface CPImageObjectData : NSObject

@property (retain) struct CGImage { } *image;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsOnPage;

+ (id)imageObjectDataWithCGImage:(struct CGImage { } *)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 andBoundsOnPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
