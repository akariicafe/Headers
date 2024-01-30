@class NSDictionary, NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject {
    NTPBPrefetchConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=isBackgroundFetchEnabled) BOOL backgroundFetchEnabled;
@property (readonly, nonatomic) double minimumBackgroundFetchInterval;
@property (readonly, nonatomic) BOOL shouldPrefetchForYouFeed;
@property (readonly, nonatomic) unsigned long long maximumFavoritesFeedsToPrefetch;
@property (readonly, nonatomic) double prefetchedForYouExpiration;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)initWithPBPrefetchConfig:(id)a0;

@end
