@class NSString;

@interface CHCutpointModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, nonatomic) long long distanceLeftFeatureIndex;
@property (readonly, nonatomic) long long distanceRightFeatureIndex;
@property (readonly, nonatomic) long long sinAngleLeftFeatureIndex;
@property (readonly, nonatomic) long long cosAngleLeftFeatureIndex;
@property (readonly, nonatomic) long long sinAngleRightFeatureIndex;
@property (readonly, nonatomic) long long cosAngleRightFeatureIndex;
@property (readonly, nonatomic) long long endpointFeatureIndex;
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName;
@property (readonly, retain, nonatomic) NSString *cutpointProbabilityOutputName;

- (void)dealloc;
- (long long)maxSequenceLength;
- (id)detectCutpointsInDrawing:(id)a0 minimumDrawingSize:(struct CGSize { double x0; double x1; })a1 excludingStrokeIDs:(const void *)a2;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (long long)windowOverlap;
- (struct vector<CHCutpointCandidate, std::allocator<CHCutpointCandidate>> { struct CHCutpointCandidate *x0; struct CHCutpointCandidate *x1; struct __compressed_pair<CHCutpointCandidate *, std::allocator<CHCutpointCandidate>> { struct CHCutpointCandidate *x0; } x2; })_detectedCutpoints:(void *)a0 resampledDrawing:(id)a1;
- (id)_remappedCutpoints:(void *)a0 pointMap:(void *)a1 originalDrawing:(id)a2 excludingStrokeIDs:(const void *)a3;

@end
