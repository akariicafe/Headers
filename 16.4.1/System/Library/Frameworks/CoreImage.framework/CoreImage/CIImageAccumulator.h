@interface CIImageAccumulator : NSObject {
    void *_state;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;
@property (readonly) int format;

+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1;
+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1 colorSpace:(struct CGColorSpace { } *)a2;
+ (id)imageAccumulatorWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1 options:(id)a2;

- (void)setImage:(id)a0;
- (void)dealloc;
- (id)image;
- (id)init;
- (id)description;
- (void)clear;
- (void)commitUpdates:(id)a0;
- (struct CGColorSpace { } *)colorSpace;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1 colorSpace:(struct CGColorSpace { } *)a2;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(int)a1 options:(id)a2;
- (void)setImage:(id)a0 dirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
