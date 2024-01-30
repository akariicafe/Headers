@class NSArray, NSOrderedSet, NSURL, NSString, NSNumber;

@interface CRRecognizerConfiguration : NSObject <CRConfidenceThresholdProviding>

@property float mediumConfidenceThreshold;
@property float highConfidenceThreshold;
@property (readonly) int colorSpace;
@property (readonly) NSURL *customModelURL;
@property (readonly) long long batchSize;
@property (readonly) long long maxConcurrentBatches;
@property (readonly) NSArray *inputWidths;
@property (readonly) double inputHeight;
@property (readonly) double angleThresholdForRotatedCrops;
@property (readonly) BOOL cpuOnly;
@property (readonly) BOOL decodeWithLM;
@property (readonly) long long numTopStringCandidates;
@property (readonly) NSOrderedSet *languages;
@property (readonly) NSArray *customWords;
@property (readonly) float precisionThreshold;
@property (readonly) NSNumber *lexiconWeight;
@property (readonly) NSNumber *characterLMWeight;
@property (readonly) NSNumber *wordLMWeight;
@property (readonly) unsigned long long minTitleLength;
@property (readonly) double minTitleProb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedLanguagesForVersion:(long long)a0;
+ (id)languageSetFromInputLanguages:(id)a0 supportedLanguages:(id)a1;

- (void).cxx_destruct;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (BOOL)usesAppleNeuralEngine;
- (id)initV1DefaultConfig;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (void)setConfidenceThresholdsForRevision:(unsigned long long)a0;
- (void)loadLanguageModelWeightsForLanguageIdentifier:(id)a0 rev:(unsigned long long)a1;

@end
