@interface VNHeatMapExtrema : NSObject {
    struct CGPoint { double x; double y; } _extrema[4];
    float _extremeValues[4];
}

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeRectFromExtremaUsingThreshold:(float)a0 vImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1;
- (void)updateExtrema:(float)a0 x:(int)a1 y:(int)a2;

@end
