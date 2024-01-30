@class CRRecognizerConfiguration;

@interface CRMultiModelTextFeatureSplitter : NSObject

@property (retain) CRRecognizerConfiguration *configuration;

+ (BOOL)_featuresAreLikelyStackedTextResults:(id)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)combinedLineFeature:(id)a0 lineFeature:(id)a1;
- (void)enumerateTextFeatures:(id)a0 usingBlock:(id /* block */)a1;
- (id)pruneAndSortRecognizedTextFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)pruneRecognizedTextFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
