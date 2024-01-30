@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForEvergreenArticles;

- (void).cxx_destruct;
- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
