@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionLateralCAFilter : CIFilter {
    CIImage *inputImage;
    NSNumber *inputLateralCAAmount;
    NSData *inputLateralCAMap;
    NSNumber *inputLateralCAMapWidth;
    NSNumber *inputLateralCAMapHeight;
    id inputColorSpace;
    CIImage *mapImg;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (BOOL)makeMapImages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 map:(const struct vec4 { float x0; float x1; float x2; float x3; } *)a2 mapWidth:(int)a3 mapHeight:(int)a4 amount:(float)a5;

@end
