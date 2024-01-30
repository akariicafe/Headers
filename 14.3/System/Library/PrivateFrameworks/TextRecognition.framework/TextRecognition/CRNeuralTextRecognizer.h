@class NSString, CRRecognizerConfiguration, CRPerformanceStatistics, NSObject;
@protocol CRTextDecoding, CRRecognizerFeatureProviding, CRTextRecognizerModel;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding>

@property (retain) NSObject<CRRecognizerFeatureProviding> *featureProvider;
@property (retain) NSObject<CRTextRecognizerModel> *model;
@property (retain) NSObject<CRTextDecoding> *textDecoder;
@property BOOL shouldCancel;
@property unsigned int desiredQoS;
@property (retain) CRPerformanceStatistics *inferenceStats;
@property (retain) CRPerformanceStatistics *decodingStats;
@property (retain) CRRecognizerConfiguration *configuration;
@property (readonly) float mediumConfidenceThreshold;
@property (readonly) float highConfidenceThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_modelForRevision:(long long)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_featureProviderForRevision:(long long)a0 configuration:(id)a1 model:(id)a2 error:(id *)a3;
+ (id)_textDecoderForRevision:(long long)a0 configuration:(id)a1 model:(id)a2 error:(id *)a3;
+ (id)recognizerForRevision:(unsigned long long)a0 imageReaderOptions:(id)a1 error:(id *)a2;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isCancelled;
- (id)recognizeInImage:(id)a0 textFeatures:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)shouldUseLM;

@end
