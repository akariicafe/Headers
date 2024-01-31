@class NSString;

@interface MTURLCommandRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) unsigned long long commandType;
@property (readonly, nonatomic) unsigned long long playQueueType;
@property (readonly, nonatomic) unsigned long long playReason;
@property (readonly, nonatomic) long long playbackOrder;
@property (readonly, nonatomic) long long playContext;
@property (readonly, nonatomic) long long playContextSortType;
@property (readonly, nonatomic) NSString *podcastUuid;
@property (readonly, nonatomic) NSString *podcastFeedUrl;
@property (readonly, nonatomic) NSString *episodeUuid;
@property (readonly, nonatomic) NSString *podcastAdamId;
@property (readonly, nonatomic) NSString *episodeAdamId;
@property (readonly, nonatomic) NSString *stationUuid;
@property (readonly, nonatomic) NSString *requesterDsid;

- (id)initWithURLString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_loadQueryParameterValuesFromString:(id)a0;
- (void)_lookupEpisodeUuidIfNecessaryFromURLString:(id)a0;
- (void)_lookupPodcastUuidIfNecessaryFromURLString:(id)a0;
- (id)copyWithPlayReason:(unsigned long long)a0;

@end
