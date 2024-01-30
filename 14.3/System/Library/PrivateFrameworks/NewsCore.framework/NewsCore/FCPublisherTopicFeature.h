@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *publisherTagID;
@property (retain, nonatomic) NSString *topicTagID;
@property (readonly, nonatomic) NSArray *features;

- (id)init;
- (void).cxx_destruct;
- (id)fr_description;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (id)initWithPublisherTagID:(id)a0 topicTagID:(id)a1;

@end
