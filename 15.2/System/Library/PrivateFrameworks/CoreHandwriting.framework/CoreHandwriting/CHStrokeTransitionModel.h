@class NSString;

@interface CHStrokeTransitionModel : CHRecurrentNeuralNetworkMontreal

@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAlphaFeatureIndex;
@property (readonly, nonatomic) long long cosAlphaFeatureIndex;
@property (readonly, nonatomic) long long gapFeatureIndex;
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName;
@property (readonly, retain, nonatomic) NSString *spaceProbabilityOutputName;
@property (readonly, retain, nonatomic) NSString *charBoundaryProbabilityOutputName;
@property (readonly, retain, nonatomic) NSString *delayedStrokeProbabilityOutputName;

- (void)dealloc;
- (long long)maxSequenceLength;
- (BOOL)classifyStrokesInDrawing:(id)a0 minimumDrawingSize:(struct CGSize { double x0; double x1; })a1 outDelayedStrokeProbabilities:(void *)a2 outSpaceProbabilities:(void *)a3 outCharBoundaryProbabilities:(void *)a4;
- (struct set<long, std::less<long>, std::allocator<long>> { struct __tree<long, std::less<long>, std::allocator<long>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<long>> { unsigned long long x0; } x2; } x0; })detectedDelayedStrokes:(const void *)a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (long long)windowOverlap;

@end
