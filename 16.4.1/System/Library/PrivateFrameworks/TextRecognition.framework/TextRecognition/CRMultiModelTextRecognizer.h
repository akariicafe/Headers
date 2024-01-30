@class CRTextOrientationCorrector, CRRecognizerConfiguration, NSDictionary, NSString, CRPerformanceStatistics, CRMultiModelTextFeatureSplitter;

@interface CRMultiModelTextRecognizer : NSObject <CRTextRecognizer>

@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *groupingStatsStorage;
@property (retain) CRPerformanceStatistics *orientationStats;
@property (retain) CRTextOrientationCorrector *orientationCorrector;
@property (readonly) CRPerformanceStatistics *inferenceStats;
@property (readonly) CRPerformanceStatistics *decodingStats;
@property (readonly) CRPerformanceStatistics *groupingStats;
@property (retain) CRRecognizerConfiguration *configuration;
@property (retain) NSDictionary *configurationOptions;
@property (retain) CRMultiModelTextFeatureSplitter *textFeatureSplitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recognizerForRevision:(unsigned long long)a0 imageReaderOptions:(id)a1 error:(id *)a2;
+ (id)sortedSupportedLanguages:(id)a0 byPreferredLanguages:(id)a1;

- (BOOL)_isCancelled;
- (id)initWithConfigurationOptions:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)preheatWithError:(id *)a0;
- (id)identifierForTextFeature:(id)a0;
- (id)recognizeInImage:(id)a0 textFeatures:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (id)recognizerForIdentifier:(id)a0;
- (id)thresholdsForTextFeature:(id)a0;
- (id)titleParametersForTextFeature:(id)a0;

@end
