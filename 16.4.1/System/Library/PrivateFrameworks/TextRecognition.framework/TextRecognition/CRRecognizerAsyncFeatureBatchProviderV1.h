@class CRNeuralRecognizerConfiguration, NSString, NSObject;
@protocol CRTextRecognizerModelInputProvider;

@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding>

@property (retain) NSObject<CRTextRecognizerModelInputProvider> *inputProvider;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateInputsForImage:(id)a0 textFeatures:(id)a1 usingBlock:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 inputProvider:(id)a1 error:(id *)a2;

@end
