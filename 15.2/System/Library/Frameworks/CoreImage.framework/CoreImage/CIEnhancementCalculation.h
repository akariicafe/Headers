@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {
    double exposureValue;
    double maxShadow;
    double minShadow;
    double exposureValueAtZeroShadow;
    double curvePercent;
    BOOL faceInputSet;
    double percentFaceChange;
}

@property (readonly) struct { double i; double q; } originalFaceColor;
@property (readonly) CIEnhancementHistogram *lumHist;
@property (readonly) CIEnhancementHistogram *rgbSumHist;
@property (readonly) CIEnhancementHistogram *satHist;
@property (readonly) CIEnhancementHistogram *borderHist;

+ (double)bestWarmthForI:(double)a0 q:(double)a1 percentChange:(double *)a2;

- (id)rawShadow;
- (void)setFaceColorFromChromaI:(double)a0 andChromaQ:(double)a1;
- (int)putShadowsAnalysisInto:(double *)a0;
- (void)downSampleHistogram:(id)a0 to:(unsigned int)a1 storeIn:(double *)a2;
- (void)printAnalysis;
- (void)setCurvePercent:(double)a0;
- (void)setLuminanceHistogram:(id)a0;
- (void)setRGBSumHistogram:(id)a0;
- (void)setBorderHistogram:(id)a0;
- (void)setSaturationHistogram:(id)a0;
- (void)setupFaceColor:(id)a0 redIndex:(int)a1 greenIndex:(int)a2 blueIndex:(int)a3;
- (void)setExposureValue:(double)a0;
- (void)setShadowsMin:(double)a0 max:(double)a1 zeroExposure:(double)a2;
- (void)printHistogram:(id)a0 downsampledTo:(unsigned int)a1;
- (void)printHistogramsDownsampledTo:(unsigned int)a0;
- (id)vibrance;
- (unsigned long long)curveCount;
- (id)init;
- (id)faceBalanceWarmth;
- (id)faceBalanceStrength;
- (struct CGPoint { double x0; double x1; })curvePointAtIndex:(unsigned long long)a0;
- (id)shadow;
- (void)dealloc;

@end
