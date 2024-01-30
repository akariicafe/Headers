@class PVContext, NSDictionary;
@protocol PVVisionIntegrating;

@interface PVVisionAnalyzer : NSObject {
    id<PVVisionIntegrating> _visionIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
}

- (id)initWithContext:(id)a0 visionIntegration:(id)a1;
- (void).cxx_destruct;
- (id)analyzeImage:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)configureRequest:(id)a0;
- (long long)_expressionTypeFromExpressionString:(id)a0;
- (struct CGPoint { double x0; double x1; })centroidForLandmarkRegion:(id)a0;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)a0;

@end
