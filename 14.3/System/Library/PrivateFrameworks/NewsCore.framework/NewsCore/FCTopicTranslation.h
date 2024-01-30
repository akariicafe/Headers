@class NTPBArticleTopic, NSString;

@interface FCTopicTranslation : NSObject

@property (retain, nonatomic) NTPBArticleTopic *articleTopic;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTagID:(id)a0;
- (id)description;
- (id)initWithLanguageBucket:(id)a0;

@end
