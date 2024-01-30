@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *publisherTagID;
@property (retain, nonatomic) NSString *topicTagID;
@property (readonly, nonatomic) NSArray *features;

- (id)initWithPublisherTagID:(id)a0 topicTagID:(id)a1;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
