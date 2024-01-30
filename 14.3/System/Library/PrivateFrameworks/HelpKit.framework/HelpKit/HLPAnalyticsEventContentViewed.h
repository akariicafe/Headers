@class NSString;

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent

@property (retain, nonatomic) NSString *topicID;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *viewMode;
@property (nonatomic) unsigned long long viewNum;
@property (retain, nonatomic) NSString *externalURLString;
@property (retain, nonatomic) NSString *fromTopicID;

+ (id)eventWithTopicID:(id)a0 source:(id)a1 interfaceStyle:(long long)a2;

- (id)eventName;
- (void).cxx_destruct;
- (void)log;
- (id)_initWithTopicID:(id)a0 source:(id)a1 interfaceStyle:(long long)a2;
- (id)caRepresentation;

@end
