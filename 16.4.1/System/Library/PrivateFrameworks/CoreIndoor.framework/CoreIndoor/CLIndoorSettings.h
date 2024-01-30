@class NSSet, NSString, CLGpsPosition;

@interface CLIndoorSettings : NSObject

@property (nonatomic) BOOL pipelinedEnabled;
@property (copy, nonatomic) NSSet *disabledVenues;
@property (nonatomic) struct duration<long double, std::ratio<1, 1>> { long double __rep_; } debounceInterval;
@property (nonatomic) struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } errorBackoffDuration;
@property (nonatomic) struct duration<long long, std::ratio<1, 1>> { long long __rep_; } tilePrefetchActivityInterval;
@property (nonatomic) struct optional<unsigned int> { BOOL m_initialized; unsigned int m_storage; } tilePrefetchPredictionActivityCycleAllowance;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } tilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; unsigned long long m_storage; } tilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } prefetchClusterMergeRadius;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } indoorTilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; unsigned long long m_storage; } indoorTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } indoorPrefetchClusterMergeRadius;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } regionalTilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; unsigned long long m_storage; } regionalTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; double m_storage; } regionalPrefetchClusterMergeRadius;
@property (nonatomic) struct duration<long long, std::ratio<1, 1>> { long long __rep_; } tilePrefetchRelevancyWindow;
@property (copy, nonatomic) NSString *indoorAvailabilityTilesServerUrl;
@property (copy, nonatomic) NSSet *forcedVenues;
@property (retain, nonatomic) CLGpsPosition *fakeLastFix;
@property (nonatomic) double venueGroupDistance;

+ (id)settingToSet:(id)a0;

- (id).cxx_construct;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
