@class NSString, CIImage, NSNumber;

@interface RAWDefringeFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputWidth;
    NSNumber *inputAxialWidth;
    id inputColorSpace;
}

@property (readonly, copy, nonatomic) NSString *deFringeKernelSource;
@property (readonly, copy, nonatomic) NSString *fringeDirectionsKernelSource;
@property (readonly, copy, nonatomic) NSString *fringeEdgesKernelSource;

- (void).cxx_destruct;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByOneROI:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByTwoROI:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByThreeROI:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByFourROI:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandByFiveROI:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandSelect:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandSelectN:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)kernelSourceWithBuffer:(const char *)a0 inflatedSize:(unsigned long long)a1 deflatedSize:(unsigned long long)a2;

@end
