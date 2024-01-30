@class CRTextSequenceRecognizerModel, NSOrderedSet, CRNeuralRecognizerConfiguration, CRRegex, NSLocale, NSString;

@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding>

@property (readonly, nonatomic) NSLocale *locale;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (retain, nonatomic) CRRegex *regExpressions;
@property (nonatomic) BOOL shouldUseLM;
@property (nonatomic) BOOL shouldUseFalsePositiveFiltering;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (readonly) struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; } pruningPolicy;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lmSupportedLanguages;

- (void).cxx_destruct;
- (void)dealloc;
- (void)decodeOutput:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (BOOL)shouldDecodeWithLM;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (id)_buildActivationMatrices:(id)a0;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;
- (void)_decodeFeaturesWithInfo:(id)a0 activations:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (BOOL)_wordLMShouldFilterCandidate:(id)a0;

@end
