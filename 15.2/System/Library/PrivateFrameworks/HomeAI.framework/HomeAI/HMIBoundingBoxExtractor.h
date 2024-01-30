@class HMIBoundingBoxExtractorConfiguration, CIContext;

@interface HMIBoundingBoxExtractor : HMFObject

@property (readonly) CIContext *ciContext;
@property (readonly) HMIBoundingBoxExtractorConfiguration *config;

+ (id)squaredBoxes:(id)a0;
+ (id)scaledBoxes:(id)a0 scale:(float)a1;
+ (id)validBoxes:(id)a0 minSize:(float)a1 maxSize:(float)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (id)mergedBoxes:(id)a0 overlapThreshold:(float)a1 minSize:(float)a2 maxSize:(float)a3 imageSize:(struct CGSize { double x0; double x1; })a4;
+ (BOOL)isValidBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 minSize:(float)a1 maxSize:(float)a2 imageSize:(struct CGSize { double x0; double x1; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })squaredBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)rawBoxesInFloodFillImage:(id)a0;
- (id)boxesFromRawBoxes:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)boxesInFloodFillImage:(id)a0;

@end
