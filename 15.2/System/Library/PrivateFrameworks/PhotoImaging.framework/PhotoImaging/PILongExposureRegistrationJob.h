@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob

@property (nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } guideExtent;
@property (retain, nonatomic) CIImage *stillImage;
@property (retain, nonatomic) VNImageHomographicAlignmentObservation *observation;

- (BOOL)render:(out id *)a0;
- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)registrationRequest;

@end
