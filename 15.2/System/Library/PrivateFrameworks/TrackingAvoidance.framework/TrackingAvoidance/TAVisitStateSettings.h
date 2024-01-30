@class NSSet;

@interface TAVisitStateSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long visitSnapshotCapacity;
@property (readonly, nonatomic) unsigned long long visitDisplayBufferCapacity;
@property (readonly, nonatomic) unsigned long long interVisitMetricSnapshotCapacity;
@property (readonly, nonatomic) double thresholdOfLocationRelevance;
@property (readonly, nonatomic) double interVisitSnapshotUpdateInterval;
@property (readonly, nonatomic) double snapshotBufferTimeIntervalOfRetention;
@property (readonly, nonatomic) unsigned long long loiBufferPerTypeCapacity;
@property (readonly, nonatomic) double loiBufferTimeIntervalOfRetention;
@property (readonly, nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (readonly, nonatomic) double qualitySnapshotDwellDuration;
@property (readonly, nonatomic) double qualitySnapshotDisplayOnDuration;
@property (readonly, nonatomic) unsigned long long uniqueUTObservationCapPerVisit;
@property (readonly, nonatomic) NSSet *sensitiveLOITypes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithVisitSnapshotCapacityOrDefault:(id)a0 visitDisplayBufferCapacityOrDefault:(id)a1 interVisitMetricSnapshotCapacityOrDefault:(id)a2 interVisitSnapshotUpdateIntervalOrDefault:(id)a3 thresholdOfLocationRelevanceOrDefault:(id)a4 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)a5 loiBufferPerTypeCapacityOrDefault:(id)a6 loiBufferTimeIntervalOfRetentionOrDefault:(id)a7 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)a8 qualitySnapshotDwellDurationOrDefault:(id)a9 qualitySnapshotDisplayOnDurationOrDefault:(id)a10 uniqueUTObservationCapPerVisitOrDefault:(id)a11 sensitiveLOITypesOrDefault:(id)a12;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVisitSnapshotCapacity:(unsigned long long)a0 visitDisplayBufferCapacity:(unsigned long long)a1 interVisitMetricSnapshotCapacity:(unsigned long long)a2 interVisitSnapshotUpdateInterval:(double)a3 thresholdOfLocationRelevance:(double)a4 snapshotBufferTimeIntervalOfRetention:(double)a5 loiBufferPerTypeCapacity:(unsigned long long)a6 loiBufferTimeIntervalOfRetention:(double)a7 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)a8 qualitySnapshotDwellDuration:(double)a9 qualitySnapshotDisplayOnDuration:(double)a10 uniqueUTObservationCapPerVisit:(unsigned long long)a11 sensitiveLOITypes:(id)a12;

@end
