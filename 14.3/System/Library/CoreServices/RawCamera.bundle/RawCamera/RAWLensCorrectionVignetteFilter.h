@class CIImage, NSData, NSNumber;

@interface RAWLensCorrectionVignetteFilter : CIFilter {
    CIImage *inputImage;
    NSData *inputVignetteTable;
    NSNumber *inputVignetteAmount;
    id inputColorSpace;
    CIImage *vigImg;
}

+ (id)customAttributes;

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (BOOL)makeMapImages;

@end
