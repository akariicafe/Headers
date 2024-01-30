@class NSString;

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent

@property (retain, nonatomic) NSString *topicID;
@property (retain, nonatomic) NSString *topicTitle;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *viewMode;
@property (nonatomic) unsigned long long viewNum;
@property (retain, nonatomic) NSString *externalURLString;
@property (retain, nonatomic) NSString *fromTopicID;

+ (id)eventWithTopicID:(id)a0 topicTitle:(id)a1 source:(id)a2 interfaceStyle:(long long)a3;

- (id)eventName;
- (void)log;
- (void).cxx_destruct;
- (id)_initWithTopicID:(id)a0 topicTitle:(id)a1 source:(id)a2 interfaceStyle:(long long)a3;
- (id)caRepresentation;

@end
