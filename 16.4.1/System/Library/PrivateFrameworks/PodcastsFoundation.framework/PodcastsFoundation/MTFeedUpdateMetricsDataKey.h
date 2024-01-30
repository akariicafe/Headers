@class NSString;

@interface MTFeedUpdateMetricsDataKey : NSObject

@property (class, nonatomic, readonly) NSString *actionType;
@property (class, nonatomic, readonly) NSString *hasPendingCarouselTask;
@property (class, nonatomic, readonly) NSString *backgroundFetch;
@property (class, nonatomic, readonly) NSString *carouselTaskUserString;
@property (class, nonatomic, readonly) NSString *backgroundTask;
@property (class, nonatomic, readonly) NSString *deletedEpisodeCount;
@property (class, nonatomic, readonly) NSString *episodeCount;
@property (class, nonatomic, readonly) NSString *error;
@property (class, nonatomic, readonly) NSString *eventId;
@property (class, nonatomic, readonly) NSString *fetchInterval;
@property (class, nonatomic, readonly) NSString *foreground;
@property (class, nonatomic, readonly) NSString *needsBootstrap;
@property (class, nonatomic, readonly) NSString *newEpisodeCount;
@property (class, nonatomic, readonly) NSString *notificationEpisodesCount;
@property (class, nonatomic, readonly) NSString *notificationType;
@property (class, nonatomic, readonly) NSString *pageCount;
@property (class, nonatomic, readonly) NSString *pcrFallback;
@property (class, nonatomic, readonly) NSString *podcastCount;
@property (class, nonatomic, readonly) NSString *podcastStoreId;
@property (class, nonatomic, readonly) NSString *podcastUuid;
@property (class, nonatomic, readonly) NSString *source;
@property (class, nonatomic, readonly) NSString *statusCode;
@property (class, nonatomic, readonly) NSString *totalEpisodeCount;
@property (class, nonatomic, readonly) NSString *uniquePodcastUuidCount;
@property (class, nonatomic, readonly) NSString *updatedEpisodeCount;
@property (class, nonatomic, readonly) NSString *updaterType;
@property (class, nonatomic, readonly) NSString *userInitiated;
@property (class, nonatomic, readonly) NSString *detectedSyncLoop;

- (id)init;
- (void).cxx_destruct;

@end
