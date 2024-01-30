@interface CLSSceneSignalNode : CLSSignalNode

@property (nonatomic) double searchThreshold;
@property (nonatomic) double graphHighPrecisionThreshold;
@property (nonatomic) double graphHighRecallThreshold;

- (id)initWithTaxonomyNode:(id)a0;

@end
