@class CRNeuralTextRecognizer;

@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (retain) CRNeuralTextRecognizer *neuralRecognizer;

- (void)cancel;
- (void).cxx_destruct;
- (id)decodingStats;
- (id)identifierForTextFeature:(id)a0;
- (id)inferenceStats;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)recognizerForIdentifier:(id)a0;

@end
