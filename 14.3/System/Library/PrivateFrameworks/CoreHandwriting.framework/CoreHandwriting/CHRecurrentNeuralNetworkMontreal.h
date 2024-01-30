@class NSArray, NSDictionary;

@interface CHRecurrentNeuralNetworkMontreal : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) struct MontrealNeuralNetwork { } *_model;
@property (readonly, retain, nonatomic) NSArray *inputNames;
@property (readonly, retain, nonatomic) NSDictionary *featureCounts;
@property (readonly, retain, nonatomic) NSArray *outputNames;
@property (readonly, retain, nonatomic) NSDictionary *classCounts;

- (void)dealloc;
- (struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;
- (id)initWithModelName:(id)a0;
- (BOOL)_recursivelyPredictProbabilitiesForDrawing:(id)a0 features:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 modelInputName:(id)a3 modelOutputNames:(id)a4 probabilities:(struct vector<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > >, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > > > { struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > *x0; struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > *x1; struct __compressed_pair<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > *, std::__1::allocator<std::__1::reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > > > { struct reference_wrapper<std::__1::vector<double, std::__1::allocator<double> > > *x0; } x2; } *)a5 probabilityPredictionBlock:(id /* block */)a6 error:(id *)a7 cancellationBlock:(id /* block */)a8;

@end
