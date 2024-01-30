@class NSDate, NSString, NSURL, MPModelFileAsset, MPModelPodcast, NSDateComponents, MPModelPlaybackPosition, MPModelPodcastAuthor;

@interface MPModelPodcastEpisode : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (nonatomic) double duration;
@property (nonatomic) float userRating;
@property (nonatomic, getter=isExplicitEpisode) BOOL explicitEpisode;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *commentText;
@property (copy, nonatomic) NSDate *datePlayed;
@property (copy, nonatomic) NSURL *streamURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) long long episodeType;
@property (readonly, nonatomic) long long episodeNumber;
@property (readonly, nonatomic) long long seasonNumber;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__streamURL_KEY;
+ (id)__seasonNumber_KEY;
+ (id)__shareURL_KEY;
+ (id)__author_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithVariants:(unsigned long long)a0;
+ (id)__duration_KEY;
+ (id)__hasVideo_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__userRating_KEY;
+ (id)__playbackPosition_KEY;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)__datePlayed_KEY;
+ (id)__podcast_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__descriptionText_KEY;

- (id)artworkCatalog;
- (id)humanDescription;
- (void).cxx_destruct;

@end
