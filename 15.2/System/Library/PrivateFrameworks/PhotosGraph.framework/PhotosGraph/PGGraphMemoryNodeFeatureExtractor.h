@class NSString;

@interface PGGraphMemoryNodeFeatureExtractor : MARelationCollectionFeatureExtractor <PGGraphFeatureExtractorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureExtractorWithError:(id *)a0;

- (id)initWithError:(id *)a0;

@end
