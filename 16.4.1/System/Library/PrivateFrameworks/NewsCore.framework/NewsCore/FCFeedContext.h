@class NSString;

@interface FCFeedContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) BOOL isHiddenFeed;
@property (nonatomic) BOOL isPaidBundleFeed;
@property (nonatomic) BOOL isTopStories;
@property (nonatomic) BOOL isEditorial;
@property (nonatomic) BOOL isEditorialGems;
@property (nonatomic) BOOL isCoverArticles;

+ (id)feedContextForHiddenFeed;
+ (id)feedContextForEditorialChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForEditorialTag:(id)a0;
+ (id)feedContextForCoverArticlesFeed;
+ (id)feedContextForTopStoriesTag:(id)a0;
+ (id)feedContextForEditorialChannel:(id)a0 editorialGemsSectionID:(id)a1;
+ (id)feedContextForTopStoriesChannel:(id)a0 sectionID:(id)a1;
+ (id)feedContextForPaidBundleFeed;
+ (id)feedContextForTag:(id)a0;
+ (id)feedContextForBreakingNewsChannelID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
