@interface CLIndoorAvailabilityTileParams : NSObject {
    struct optional<proto::params::LocalizerParameters> { BOOL m_initialized; struct aligned_storage<proto::params::LocalizerParameters> { union dummy_u { char data[296]; struct a8 { } aligner_; } dummy_; } m_storage; } _optionalParams;
}

@property (readonly, nonatomic) double availabilityZScoreConfidenceInterval;
@property (readonly, nonatomic) float indoorNumberOfDaysBeforeTileRedownload;
@property (readonly, nonatomic) unsigned int indoorLocationOfInterestMergeRadiusKM;
@property (readonly, nonatomic) unsigned int indoorPrefetchMaxFloorCount;
@property (readonly, nonatomic) unsigned int indoorPrefetchMaxTotalBytes;
@property (readonly, nonatomic) unsigned int indoorPrefetchRadiusKM;
@property (readonly, nonatomic) BOOL hasMotionActivityDebounceParameters;
@property (readonly, nonatomic) BOOL hasNonFitnessToCyclingSeconds;
@property (readonly, nonatomic) unsigned int nonFitnessToCyclingSeconds;
@property (readonly, nonatomic) BOOL hasNonFitnessToRunningSeconds;
@property (readonly, nonatomic) unsigned int nonFitnessToRunningSeconds;
@property (readonly, nonatomic) BOOL hasRunningToNonFitnessSeconds;
@property (readonly, nonatomic) unsigned int runningToNonFitnessSeconds;
@property (readonly, nonatomic) BOOL hasCyclingToNonFitnessSeconds;
@property (readonly, nonatomic) unsigned int cyclingToNonFitnessSeconds;
@property (readonly, nonatomic) unsigned int preferPredictionWithinNActivityCycles;
@property (readonly, nonatomic) BOOL hasRegionalPrefetchMaxFloorCount;
@property (readonly, nonatomic) float regionalNumberOfDaysBeforeTileRedownload;
@property (readonly, nonatomic) unsigned int regionalLocationOfInterestMergeRadiusKM;
@property (readonly, nonatomic) unsigned int regionalPrefetchMaxFloorCount;
@property (readonly, nonatomic) unsigned int regionalPrefetchMaxTotalBytes;
@property (readonly, nonatomic) unsigned int regionalPrefetchRadiusKM;

- (id)initWithAvailabilityTile:(void *)a0;
- (id).cxx_construct;
- (struct optional<proto::params::LocalizerParameters> { BOOL x0; struct aligned_storage<proto::params::LocalizerParameters> { union dummy_u { char x0[296]; struct a8 { } x1; } x0; } x1; })localizerParams;
- (id)init;
- (void).cxx_destruct;

@end
