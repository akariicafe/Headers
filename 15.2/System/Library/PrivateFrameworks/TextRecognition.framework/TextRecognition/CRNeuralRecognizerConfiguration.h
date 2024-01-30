@class CRLMFilteringThresholds, NSArray, NSString, NSURL, CRTitleParameters, NSNumber, CRConfidenceThresholds;

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration

@property float mediumConfidenceThreshold;
@property float highConfidenceThreshold;
@property (readonly) int colorSpace;
@property (readonly) NSURL *customModelURL;
@property (readonly) long long batchSize;
@property (readonly) long long maxConcurrentBatches;
@property (readonly) NSArray *inputWidths;
@property (readonly) double inputHeight;
@property (readonly) BOOL decodeWithLM;
@property (readonly) BOOL filterWithLM;
@property (readonly) NSArray *customWords;
@property (readonly) float precisionThreshold;
@property (readonly) NSNumber *lexiconWeight;
@property (readonly) NSNumber *characterLMWeight;
@property (readonly) NSNumber *wordLMWeight;
@property (readonly) NSString *locale;
@property (readonly) CRTitleParameters *titleParameters;
@property (readonly) CRConfidenceThresholds *confidenceThresholds;
@property (readonly) CRLMFilteringThresholds *lmFilteringThresholds;

- (void)loadLanguageModelWeightsForLanguageIdentifier:(id)a0 rev:(unsigned long long)a1;
- (BOOL)usesAppleNeuralEngine;
- (id)textFeatureFilter;
- (id)initV1DefaultConfigWithOptions:(id)a0;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (id)initWithLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (long long)bestFitWidthIndexForAspectRatio:(double)a0;
- (void)setConfidenceThresholdsForRevision:(unsigned long long)a0;

@end
