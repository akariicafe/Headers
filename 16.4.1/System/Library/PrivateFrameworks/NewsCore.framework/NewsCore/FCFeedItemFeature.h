@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *key;
@property (nonatomic) BOOL queryable;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *topicID;

+ (id)featureForAllArticles;
+ (id)featureForIssueArticle;
+ (id)featureForTopicID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 key:(id)a1;

@end
