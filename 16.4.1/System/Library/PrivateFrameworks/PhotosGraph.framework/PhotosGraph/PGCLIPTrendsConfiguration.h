@class NSString, NSDictionary, NSArray, NSNumber;

@interface PGCLIPTrendsConfiguration : PGConfiguration <PGTrendsConfigurationProtocol>

@property (readonly, nonatomic) NSString *featureLabel;
@property (readonly, nonatomic) NSNumber *useAveragedEmbeddingAsNumber;
@property (readonly, nonatomic) NSDictionary *cosineSimilarityThresholdByVersion;
@property (readonly, nonatomic) NSArray *validTrendTypes;
@property (readonly, nonatomic) NSArray *positiveQueries;
@property (readonly, nonatomic) NSArray *positiveScenes;
@property (readonly, nonatomic) NSArray *negativeScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
