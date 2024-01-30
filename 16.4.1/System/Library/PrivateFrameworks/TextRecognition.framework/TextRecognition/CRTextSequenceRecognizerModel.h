@class NSString, NSDictionary, CRNeuralRecognizerConfiguration, NSURL, NSNumber;

@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel>

@property (nonatomic) int *codemapArray;
@property (nonatomic) unsigned long long codemapSize;
@property (nonatomic) long long ctcBlankLabelIndex;
@property (retain, nonatomic) NSDictionary *outputShape;
@property (retain, nonatomic) NSNumber *outputWidthDownscale;
@property (retain, nonatomic) NSNumber *outputWidthOffset;
@property (readonly) CRNeuralRecognizerConfiguration *configuration;
@property (readonly) NSURL *modelURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultURLOfModelInThisBundle;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)preheatWithError:(id *)a0;
- (id)inputBatchFromTextFeatures:(id)a0 image:(id)a1 featureWidth:(double)a2 configuration:(id)a3;
- (id)populateInputBatchData:(float *)a0 textFeatures:(id)a1 image:(id)a2 batchSize:(long long)a3 width:(double)a4 configuration:(id)a5;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (void)releaseIntermediateBuffers;
- (BOOL)supportCharacterBoxes;

@end
