@class MTPodcast, NSString, NSOrderedSet, MTPlaylist;

@interface MTPodcastPlaylistSettings : NSManagedObject

@property (nonatomic) int downloaded;
@property (nonatomic) long long episodesToShow;
@property (nonatomic) long long flags;
@property (nonatomic) long long mediaType;
@property (nonatomic) BOOL showPlayedEpisodes;
@property (nonatomic) long long sortOrder;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL visible;
@property (retain, nonatomic) NSOrderedSet *episodes;
@property (retain, nonatomic) MTPlaylist *playlist;
@property (retain, nonatomic) MTPlaylist *playlistIfDefault;
@property (retain, nonatomic) MTPodcast *podcast;
@property (nonatomic) long long episodeCount;
@property (nonatomic) double latestEpisodeAvailabilityDate;
@property (nonatomic) double earliestEpisodeAvailabilityDate;
@property (nonatomic) long long playOrder;

@end
