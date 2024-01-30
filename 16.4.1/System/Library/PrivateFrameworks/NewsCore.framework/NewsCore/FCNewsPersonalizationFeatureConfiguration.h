@interface FCNewsPersonalizationFeatureConfiguration : NSObject

@property (class, readonly) long long defaultArticleLengthMediumThreshold;
@property (class, readonly) long long defaultArticleLengthLongThreshold;
@property (class, readonly) long long defaultPublisherTopicPairPublisherEventCountThreshold;
@property (class, readonly) long long defaultPublisherTopicPairTopicEventCountThreshold;

@property (nonatomic) long long articleLengthMediumThreshold;
@property (nonatomic) long long articleLengthLongThreshold;
@property (nonatomic) long long publisherTopicPairPublisherEventCountThreshold;
@property (nonatomic) long long publisherTopicPairTopicEventCountThreshold;

- (id)initWithDictionary:(id)a0;

@end
