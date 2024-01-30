@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForEditorial;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;

@end
