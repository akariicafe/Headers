@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *key;
@property (nonatomic) BOOL queryable;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *topicID;

+ (id)featureForTopicID:(id)a0;
+ (id)featureForAllArticles;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 key:(id)a1;
- (unsigned long long)hash;

@end
