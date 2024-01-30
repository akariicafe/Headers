@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *feedURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) BOOL supportsSubscription;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__author_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithEpisodeKind:(id)a0;

- (id)artworkCatalog;
- (id)humanDescription;

@end
