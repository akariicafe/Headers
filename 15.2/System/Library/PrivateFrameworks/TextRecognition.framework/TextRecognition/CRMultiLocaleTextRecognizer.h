@class NSMutableDictionary;

@interface CRMultiLocaleTextRecognizer : CRMultiModelTextRecognizer

@property (retain) NSMutableDictionary *textRecognizers;

- (id)identifierForTextFeature:(id)a0;
- (id)inferenceStats;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)recognizerForIdentifier:(id)a0;
- (id)decodingStats;
- (void)cancel;

@end
