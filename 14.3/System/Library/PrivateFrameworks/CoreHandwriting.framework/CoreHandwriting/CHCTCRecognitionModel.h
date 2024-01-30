@class NSOrderedSet, NSString;

@interface CHCTCRecognitionModel : CHRecurrentNeuralNetworkCoreML

@property (readonly, nonatomic) struct CVNLPTextDecodingPruningPolicy { long long strategy; BOOL shouldSort; float threshold; unsigned int maxNumberOfCandidates; } decodingPruningPolicy;
@property (readonly) long long _activationsDomain;
@property (readonly) double _distMean;
@property (readonly) double _distStd;
@property (readonly, retain) NSOrderedSet *_stringCodeMap;
@property (readonly) double _interpointDistance;
@property (readonly) BOOL _hasBatchFirstFeatureArrayShape;
@property (readonly, nonatomic) long long sequenceCompression;
@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAlphaFeatureIndex;
@property (readonly, nonatomic) long long cosAlphaFeatureIndex;
@property (readonly, nonatomic) long long gapFeatureIndex;
@property (readonly, retain, nonatomic) NSString *directionalFeaturesInputName;
@property (readonly, retain, nonatomic) NSString *characterProbabilityOutputName;
@property (readonly, nonatomic) struct CHCodeMap { char *x0; unsigned long long x1; unsigned int *x2; unsigned int x3; } *codeMap;
@property (readonly, nonatomic) long long blankIndex;
@property (readonly, nonatomic) long long spaceIndex;

- (void)dealloc;
- (id)recognizeDrawing:(id)a0 minimumDrawingSize:(struct CGSize { double x0; double x1; })a1 initialVectorAnchorPoint:(struct CGPoint { double x0; double x1; })a2 activeCharacterSet:(id)a3 outStrokeEndings:(struct vector<long, std::__1::allocator<long> > { long long *x0; long long *x1; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x0; } x2; } *)a4;
- (id)_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 initialVectorAnchorPoint:(struct CGPoint { double x0; double x1; })a3 error:(id *)a4;
- (id)initWithModelName:(id)a0 decodingPruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a1;
- (id)_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;

@end
