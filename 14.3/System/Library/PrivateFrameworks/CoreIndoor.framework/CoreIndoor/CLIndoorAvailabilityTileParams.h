@interface CLIndoorAvailabilityTileParams : NSObject {
    struct optional<proto::params::LocalizerParameters> { BOOL m_initialized; struct aligned_storage<proto::params::LocalizerParameters> { union dummy_u { char data[280]; struct a8 { } aligner_; } dummy_; } m_storage; } _optionalParams;
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

- (id)init;
- (void).cxx_destruct;
- (struct optional<proto::params::LocalizerParameters> { BOOL x0; struct aligned_storage<proto::params::LocalizerParameters> { union dummy_u { char x0[280]; struct a8 { } x1; } x0; } x1; })localizerParams;
- (id).cxx_construct;
- (id)initWithAvailabilityTile:(struct AvailabilityTile { struct shared_ptr<proto::availability::AvailabilityTile> { struct AvailabilityTile *x0; struct __shared_weak_count *x1; } x0; BOOL x1; struct unique_ptr<wireless_diagnostics::google::protobuf::io::FileInputStream, std::__1::default_delete<wireless_diagnostics::google::protobuf::io::FileInputStream> > { struct __compressed_pair<wireless_diagnostics::google::protobuf::io::FileInputStream *, std::__1::default_delete<wireless_diagnostics::google::protobuf::io::FileInputStream> > { struct FileInputStream *x0; } x0; } x2; struct path { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; } x3; int x4; int x5; long long x6; long long x7; struct unique_ptr<FileHandleWrapper, std::__1::default_delete<FileHandleWrapper> > { struct __compressed_pair<FileHandleWrapper *, std::__1::default_delete<FileHandleWrapper> > { struct FileHandleWrapper *x0; } x0; } x8; int x9; long long x10; } *)a0;

@end
