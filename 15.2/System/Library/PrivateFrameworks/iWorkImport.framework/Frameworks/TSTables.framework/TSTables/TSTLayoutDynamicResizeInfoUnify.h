@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo

@property (readonly, nonatomic) double targetWidth;
@property (readonly, nonatomic) double targetHeight;

- (double)applyResizeHeightFactor:(double)a0;
- (double)applyResizeWidthFactor:(double)a0;
- (void)captureNewMinimumRowHeights:(id)a0;
- (double)p_applyUnifyResizeFactor:(double)a0 region:(id)a1 direction:(long long)a2 totalOfCaptured:(double)a3 count:(unsigned int)a4 capturedArray:(double *)a5 currentArray:(double *)a6 minimumArray:(double *)a7;
- (BOOL)p_applyUnifyFixedSize:(double)a0 region:(id)a1 direction:(long long)a2 count:(unsigned int)a3 currentArray:(double *)a4 minimumArray:(double *)a5;
- (BOOL)applyFixedHeight:(double)a0;
- (BOOL)applyFixedWidth:(double)a0;

@end
