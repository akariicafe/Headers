@class NSString;

@interface FCTabiHeadlineScoringEndpointConfiguration : NSObject

@property (retain, nonatomic) NSString *inputTopicIDsKey;
@property (retain, nonatomic) NSString *inputPublisherIdKey;
@property (retain, nonatomic) NSString *inputBodyTextLengthKey;
@property (retain, nonatomic) NSString *inputIsAudioKey;
@property (retain, nonatomic) NSString *inputIsFeaturedKey;
@property (retain, nonatomic) NSString *inputIsAnfKey;
@property (retain, nonatomic) NSString *inputIsPaidKey;
@property (retain, nonatomic) NSString *inputIsVideoKey;
@property (retain, nonatomic) NSString *inputGlobalEngagementClicksKey;
@property (retain, nonatomic) NSString *inputGlobalEngagementRawClicksKey;
@property (retain, nonatomic) NSString *inputGlobalEngagementImpressionsKey;
@property (retain, nonatomic) NSString *inputPublisherEngagementClicksKey;
@property (retain, nonatomic) NSString *inputPublisherEngagementRawClicksKey;
@property (retain, nonatomic) NSString *inputPublisherEngagementImpressionsKey;
@property (retain, nonatomic) NSString *inputTopicEngagementClicksKey;
@property (retain, nonatomic) NSString *inputTopicEngagementRawClicksKey;
@property (retain, nonatomic) NSString *inputTopicEngagementImpressionsKey;
@property (retain, nonatomic) NSString *inputGlobalConversionsKey;
@property (retain, nonatomic) NSString *inputGlobalConversionImpressionsKey;
@property (retain, nonatomic) NSString *inputPublisherConversionsKey;
@property (retain, nonatomic) NSString *inputPublisherConversionImpressionsKey;
@property (retain, nonatomic) NSString *inputTopicConversionsKey;
@property (retain, nonatomic) NSString *inputTopicConversionImpressionsKey;
@property (retain, nonatomic) NSString *inputTitleEmbeddingKey;
@property (retain, nonatomic) NSString *inputFullBodyEmbeddingKey;
@property (retain, nonatomic) NSString *inputPublishedTimestampKey;
@property (retain, nonatomic) NSString *inputCurrentTimestampKey;
@property (retain, nonatomic) NSString *outputKey;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
