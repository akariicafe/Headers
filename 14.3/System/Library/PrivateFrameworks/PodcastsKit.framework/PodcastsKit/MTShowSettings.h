@interface MTShowSettings : NSObject

@property (nonatomic) BOOL episodeOrderAscending;
@property (nonatomic) int downloadEpisodes;
@property (nonatomic) long long deletePlayedEpisodes;
@property (nonatomic) long long episodeLimit;
@property (nonatomic) long long updateInterval;

@end
