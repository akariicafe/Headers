@class NSMutableDictionary;

@interface PGFeatureTransformersForFeatureExtractors : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureTransformersForFeatureExtractors;

- (void).cxx_destruct;
- (id)init;
- (void)addFeatureTransformers:(id)a0 forFeatureExtractorName:(id)a1;
- (id)featureTransformersForFeatureExtractorName:(id)a0;

@end
