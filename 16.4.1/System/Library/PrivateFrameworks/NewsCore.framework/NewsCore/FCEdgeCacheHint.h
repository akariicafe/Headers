@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForTopStories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (void).cxx_destruct;

@end
