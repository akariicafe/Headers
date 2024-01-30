@class PVContext, NSDictionary;
@protocol PVVisionIntegrating;

@interface PVVisionAnalyzer : NSObject {
    id<PVVisionIntegrating> _visionIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
}

- (id)initWithContext:(id)a0 visionIntegration:(id)a1;
- (struct CGPoint { double x0; double x1; })centroidForLandmarkRegion:(id)a0;
- (void)configureRequest:(id)a0;
- (id)analyzeImage:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (long long)_expressionTypeFromExpressionString:(id)a0;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)a0;

@end
