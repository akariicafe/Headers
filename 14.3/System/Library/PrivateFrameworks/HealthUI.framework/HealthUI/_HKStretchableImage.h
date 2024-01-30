@class UIImage;

@interface _HKStretchableImage : NSObject

@property (retain, nonatomic) UIImage *topImage;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIImage *bottomImage;
@property (retain, nonatomic) UIImage *singlePointImage;

- (void).cxx_destruct;
- (double)_desiredWidth;
- (void)_renderSingleImageInContext:(struct CGContext { } *)a0 point:(struct CGPoint { double x0; double x1; })a1 contextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;
- (void)_renderStretchedInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;
- (void)renderInContext:(struct CGContext { } *)a0 topCenter:(struct CGPoint { double x0; double x1; })a1 bottomCenter:(struct CGPoint { double x0; double x1; })a2 contextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 alpha:(double)a4;

@end
