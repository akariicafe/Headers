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
- (id)detectCutpointsInDrawing:(id)a0 minimumDrawingSize:(struct CGSize { double x0; double x1; })a1 excludingStrokeIDs:(const struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long x0; } x2; } x0; } *)a2;
- (struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (long long)windowOverlap;
- (struct vector<CHCutpointCandidate, std::__1::allocator<CHCutpointCandidate> > { struct CHCutpointCandidate *x0; struct CHCutpointCandidate *x1; struct __compressed_pair<CHCutpointCandidate *, std::__1::allocator<CHCutpointCandidate> > { struct CHCutpointCandidate *x0; } x2; })_detectedCutpoints:(struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } *)a0 resampledDrawing:(id)a1;
- (id)_remappedCutpoints:(struct vector<CHCutpointCandidate, std::__1::allocator<CHCutpointCandidate> > { struct CHCutpointCandidate *x0; struct CHCutpointCandidate *x1; struct __compressed_pair<CHCutpointCandidate *, std::__1::allocator<CHCutpointCandidate> > { struct CHCutpointCandidate *x0; } x2; } *)a0 pointMap:(struct vector<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > >, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > > { struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > *x0; struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > *x1; struct __compressed_pair<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > *, std::__1::allocator<std::__1::map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > > > { struct map<long, long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, long> > > *x0; } x2; } *)a1 originalDrawing:(id)a2 excludingStrokeIDs:(const struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long x0; } x2; } x0; } *)a3;

@end
