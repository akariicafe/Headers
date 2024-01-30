@class NSOrderedSet, NSString;

@interface CHCTCRecognitionModel : CHRecurrentNeuralNetworkCoreML

@property (readonly, retain) NSOrderedSet *_stringCodeMap;
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
@property (nonatomic) double distMean;
@property (nonatomic) double distStd;
@property (nonatomic) double interpointDistance;
@property (nonatomic) BOOL hasBatchFirstFeatureArrayShape;
@property (nonatomic) long long activationsDomain;
@property (nonatomic) struct CVNLPTextDecodingPruningPolicy { long long strategy; BOOL shouldSort; float threshold; unsigned int maxNumberOfCandidates; } decodingPruningPolicy;

- (void)dealloc;
- (id)recognizeDrawing:(id)a0 minimumDrawingSize:(struct CGSize { double x0; double x1; })a1 initialVectorAnchorPoint:(struct CGPoint { double x0; double x1; })a2 activeCharacterSet:(id)a3 outStrokeEndings:(void *)a4;
- (id)_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 initialVectorAnchorPoint:(struct CGPoint { double x0; double x1; })a3 normalizeFeatures:(BOOL)a4 padFeatures:(BOOL)a5 error:(id *)a6;
- (id)featureProviderForDrawing:(id)a0 initialVectorAnchorPoint:(struct CGPoint { double x0; double x1; })a1 normalizeFeatures:(BOOL)a2 padFeatures:(BOOL)a3 outStrokeEndings:(void *)a4 outInputSequenceLength:(long long *)a5 outOutputSequenceLength:(long long *)a6;
- (id)initWithModelName:(id)a0 decodingPruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a1 featureIndex:(long long)a2;
- (id)_extractFeaturesFromDrawing:(id)a0 inputName:(id)a1 interpointDistance:(double)a2 error:(id *)a3;

@end
