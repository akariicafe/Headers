@class NSString;

@interface FCTabiUserEventAggregateEndpointConfiguration : NSObject

@property (nonatomic) unsigned long long maxEvents;
@property (retain, nonatomic) NSString *inputEventTypeKey;
@property (retain, nonatomic) NSString *inputGroupKey;
@property (retain, nonatomic) NSString *inputFeedKey;
@property (retain, nonatomic) NSString *inputViewActionKey;
@property (retain, nonatomic) NSString *inputTopicIDsKey;
@property (retain, nonatomic) NSString *inputPublisherIdKey;
@property (retain, nonatomic) NSString *inputBodyTextLengthKey;
@property (retain, nonatomic) NSString *inputIsAudioKey;
@property (retain, nonatomic) NSString *inputIsFeaturedKey;
@property (retain, nonatomic) NSString *inputIsAnfKey;
@property (retain, nonatomic) NSString *inputIsPaidKey;
@property (retain, nonatomic) NSString *inputIsVideoKey;
@property (retain, nonatomic) NSString *inputTitleEmbeddingKey;
@property (retain, nonatomic) NSString *inputFullBodyEmbeddingKey;
@property (retain, nonatomic) NSString *outputKey;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
