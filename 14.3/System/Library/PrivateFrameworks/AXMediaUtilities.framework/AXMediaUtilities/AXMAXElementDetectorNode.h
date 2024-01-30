@class AXShotflowDetector;

@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode

@property (readonly, nonatomic) AXShotflowDetector *shotflowDetector;
@property (nonatomic) int ANODModelVersion;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)modelResourceNames;
- (id)mlModelClasses;
- (id)mobileAssetType;
- (unsigned long long)minSupportedFormatVersion;
- (void)_evaluateANOD:(id)a0;
- (double)IoUForbb1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bb2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_initializeShotflowDetector;
- (id)_screenEquivalenceToken:(id)a0;
- (id)_performCrossClassNMSForDetections:(id)a0 iouThreshold:(double)a1;
- (id)iconPictureModel;
- (id)_imageByWipingTextFromRects:(id)a0 image:(id)a1 colorSpace:(struct CGColorSpace { } *)a2 ciContext:(id)a3;
- (id)_nonMaxSupression:(id)a0 iouThreshold:(double)a1;

@end
