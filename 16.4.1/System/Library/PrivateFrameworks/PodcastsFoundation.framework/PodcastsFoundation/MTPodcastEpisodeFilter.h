@class NSString;

@interface MTPodcastEpisodeFilter : NSObject

@property (nonatomic) long long playStateFilter;
@property (nonatomic) long long excludeExplicit;
@property (nonatomic) long long episodeTypeFilter;
@property (nonatomic) BOOL excludeUnentitled;
@property (nonatomic) BOOL restrictToUserEpisodes;
@property (copy, nonatomic) NSString *excludingEpisodeUuid;

+ (long long)playStateFilterFromExcludePlayed:(BOOL)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)filterExcludingPlayed;
- (id)predicateForPodcast:(id)a0;

@end
