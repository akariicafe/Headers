@class NSString;

@interface MTPodcastEpisodeFilter : NSObject

@property (nonatomic) BOOL restrictToUserEpisodes;
@property (copy, nonatomic) NSString *excludingEpisodeUuid;
@property (nonatomic) long long playStateFilter;
@property (nonatomic) long long excludeExplicit;
@property (nonatomic) long long excludeStreaming;
@property (nonatomic) long long episodeTypeFilter;
@property (nonatomic) BOOL excludeUnentitled;

+ (long long)playStateFilterFromExcludePlayed:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateForPodcast:(id)a0;
- (id)filterExcludingPlayed;

@end
