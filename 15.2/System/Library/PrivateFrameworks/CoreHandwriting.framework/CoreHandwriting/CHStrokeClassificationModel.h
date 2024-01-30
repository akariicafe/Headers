@class NSString;

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAngleFeatureIndex;
@property (readonly, nonatomic) long long cosAngleFeatureIndex;
@property (readonly, nonatomic) long long endpointFeatureIndex;
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName;
@property (readonly, retain, nonatomic) NSString *textStrokeProbabilityOutputName;

- (void)dealloc;
- (long long)maxSequenceLength;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (long long)windowOverlap;
- (id)normalizedDrawing:(id)a0 targetHeight:(double)a1 interpolationDistance:(double)a2 outputPointMap:(void *)a3;
- (BOOL)classifyStrokesInDrawing:(id)a0 outTextStrokeProbabilities:(void *)a1 cancellationBlock:(id /* block */)a2;

@end
