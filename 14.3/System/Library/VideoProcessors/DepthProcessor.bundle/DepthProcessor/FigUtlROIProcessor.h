@class FigM2MController;

@interface FigUtlROIProcessor : NSObject {
    int _originalWidth;
    int _originalHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _roiInPixels;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalRectangle;
    int _orientation;
    FigM2MController *_m2m;
}

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } originalToRoiMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } roiToOriginalMatrix;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } roiRectangle;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWidth:(int)a0 height:(int)a1 pixelFormat:(unsigned int)a2;
- (BOOL)processImage:(struct __CVBuffer { } *)a0 orientation:(int)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })roiToOriginal:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })originalToRoi:(struct CGPoint { double x0; double x1; })a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })matrix:(int)a0 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scaleX:(double)a2 scaleY:(double)a3 inverse:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a4;
- (struct CGPoint { double x0; double x1; })originalToRoiPixels:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })roiToOriginalPixels:(struct CGPoint { double x0; double x1; })a0;

@end
