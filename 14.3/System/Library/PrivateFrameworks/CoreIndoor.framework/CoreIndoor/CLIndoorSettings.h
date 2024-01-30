@class NSSet, NSString, CLGpsPosition;

@interface CLIndoorSettings : NSObject

@property (nonatomic) BOOL pipelinedEnabled;
@property (copy, nonatomic) NSSet *disabledVenues;
@property (nonatomic) struct duration<long double, std::__1::ratio<1, 1> > { long double __rep_; } debounceInterval;
@property (nonatomic) struct duration<long long, std::__1::ratio<1, 1000000000> > { long long __rep_; } errorBackoffDuration;
@property (nonatomic) struct duration<long long, std::__1::ratio<1, 1> > { long long __rep_; } tilePrefetchActivityInterval;
@property (nonatomic) struct optional<unsigned int> { BOOL m_initialized; struct aligned_storage<unsigned int> { union dummy_u { char data[4]; struct a4 { } aligner_; } dummy_; } m_storage; } tilePrefetchPredictionActivityCycleAllowance;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } tilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; struct aligned_storage<unsigned long> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } tilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } prefetchClusterMergeRadius;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } indoorTilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; struct aligned_storage<unsigned long> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } indoorTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } indoorPrefetchClusterMergeRadius;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } regionalTilePrefetchRadius;
@property (nonatomic) struct optional<unsigned long> { BOOL m_initialized; struct aligned_storage<unsigned long> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } regionalTilePrefetchMaxCount;
@property (nonatomic) struct optional<double> { BOOL m_initialized; struct aligned_storage<double> { union dummy_u { char data[8]; struct a8 { } aligner_; } dummy_; } m_storage; } regionalPrefetchClusterMergeRadius;
@property (nonatomic) struct duration<long long, std::__1::ratio<1, 1> > { long long __rep_; } tilePrefetchRelevancyWindow;
@property (copy, nonatomic) NSString *indoorAvailabilityTilesServerUrl;
@property (copy, nonatomic) NSSet *forcedVenues;
@property (retain, nonatomic) CLGpsPosition *fakeLastFix;
@property (nonatomic) double venueGroupDistance;

+ (id)settingToSet:(id)a0;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
