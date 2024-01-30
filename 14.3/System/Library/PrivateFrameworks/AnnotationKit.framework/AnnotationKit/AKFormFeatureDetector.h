@class NSObject;
@protocol AKFormFeatureDetectorDelegate;

@interface AKFormFeatureDetector : NSObject

@property (weak, nonatomic) NSObject<AKFormFeatureDetectorDelegate> *delegate;

+ (struct CGContext { } *)_newBitmapInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onPage:(id)a1 scale:(double)a2;
+ (struct CGContext { } *)_newBitmapFromCGPDFDocument:(struct CGPDFDocument { } *)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)_featureAtPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 mode:(long long)a2;
- (id)_checkboxAtPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 pageBitmap:(struct CGContext { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_translateFeature:(id)a0 toPageOrigin:(struct CGPoint { double x0; double x1; })a1;
- (id)_formFieldAtPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 enforceMaxWidth:(BOOL)a2 pageBitmap:(struct CGContext { } *)a3;
- (id)_snappedFormFieldForField:(id)a0;
- (id)_defaultFeatureForPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 snapToVerticalEdges:(BOOL)a2;
- (id)_lineAtPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 useVerticalCenter:(BOOL)a2;
- (id)_boxOnLine:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_floatPixelBufferForCGContext:(struct CGContext { } *)a0 imageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (float *)_thresholdPixelStripIn:(float *)a0 withImageLenth:(long long)a1 thresholdValue:(float)a2 startingPtr:(float *)a3 withThresholdLength:(long long)a4;
- (float *)_shiftScanAwayFromEdgeInPixels:(float *)a0;
- (long long)_scanToEdgeOfFormFieldStartingAtPoint:(struct CGPoint { double x0; double x1; })a0 withBitmapData:(float *)a1 width:(long long)a2 height:(long long)a3 bottomRowStartsAt:(float *)a4 bottomRowEndsAt:(float *)a5 withLineThickness:(long long)a6 gapWidthForDottedLines:(long long)a7 separatorHeights:(id)a8 andRegionHeight:(long long *)a9 trackAverageSpacingWidth:(long long *)a10 trackFarthestPossibleEdge:(long long *)a11 trackNumberOfSegments:(long long *)a12 trackNumberOfGapsForDottedLine:(long long *)a13 goingLeft:(BOOL)a14;
- (unsigned long long)_findLineEdgeTypeOnLeft:(BOOL)a0 startingAt:(float *)a1 withPageLeftEdge:(float *)a2 withPageWidth:(long long)a3 andFormHeight:(unsigned long long)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findExtentForLineTop:(double)a0 lineBottom:(double)a1 x:(double)a2 onPage:(id)a3;
- (struct { BOOL x0; double x1; BOOL x2; double x3; })_findVerticalEdgesAtPoint:(struct CGPoint { double x0; double x1; })a0 extent:(long long)a1 onPage:(id)a2;
- (id)featureAtPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1 mode:(long long)a2;
- (void)_drawThresholdedBitmapForTestForPageBitmap:(struct CGContext { } *)a0 withPixels:(float *)a1;

@end
