@interface TSTLayoutDynamicResizeInfoAccordion : TSTLayoutDynamicResizeInfo

@property (readonly, nonatomic) double heightFactor;
@property (readonly, nonatomic) double widthFactor;

- (double)applyResizeHeightFactor:(double)a0;
- (double)applyResizeWidthFactor:(double)a0;
- (void)captureNewMinimumRowHeights:(id)a0;
- (id)initWithDynamicResizeInfo:(id)a0;
- (id)initWithLayoutEngine:(id)a0 columnRegion:(id)a1 rowRegion:(id)a2;
- (double)p_applyAccordionResizeFactor:(double)a0 region:(id)a1 direction:(long long)a2 totalOfCaptured:(double)a3 count:(unsigned int)a4 capturedArray:(void *)a5 currentArray:(void *)a6 minimumArray:(void *)a7;

@end
