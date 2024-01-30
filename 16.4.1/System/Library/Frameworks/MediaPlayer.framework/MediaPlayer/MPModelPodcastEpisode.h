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
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *feedURL;
@property (copy, nonatomic) NSString *assetURL;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *priceType;
@property (copy, nonatomic) NSString *podcastStoreID;
@property (copy, nonatomic) NSString *externalContentID;
@property (readonly, nonatomic) long long episodeType;
@property (readonly, nonatomic) long long episodeNumber;
@property (readonly, nonatomic) long long seasonNumber;

+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)__itemType_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__mediaType_KEY;
+ (id)__priceType_KEY;
+ (id)__streamURL_KEY;
+ (id)__assetURL_KEY;
+ (id)__author_KEY;
+ (id)__datePlayed_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__externalContentID_KEY;
+ (id)__feedURL_KEY;
+ (id)__hasVideo_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__podcastStoreID_KEY;
+ (id)__podcast_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__seasonNumber_KEY;
+ (id)__shareURL_KEY;
+ (id)__state_KEY;
+ (id)__title_KEY;
+ (id)__userRating_KEY;
+ (id)kindWithVariants:(unsigned long long)a0;

- (id)humanDescription;
- (void).cxx_destruct;
- (id)artworkCatalog;

@end
