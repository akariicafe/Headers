@class HKStatistics, NSDateInterval, HDStatisticsCollectionCalculatorDefaultDataSource, NSDate, NSNumber, HDStatisticsCollectionCalculator;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDHeadphoneAudioExposureStatisticsBucket : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

@property (readonly, nonatomic) HDStatisticsCollectionCalculator *primaryCalculator;
@property (readonly, nonatomic) HDStatisticsCollectionCalculator *journaledCalculator;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *earliestStartDate;
@property (readonly, nonatomic) BOOL boundedInterval;
@property (readonly, nonatomic) NSNumber *anchor;
@property (retain, nonatomic, setter=unitTesting_setPreviousStatistics:) HKStatistics *previousStatistics;
@property (nonatomic, setter=unitTesting_setIncludesPrunableData:) BOOL includesPrunableData;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL includesJournaledSamples;
@property (readonly, nonatomic) BOOL hasPreviousStatistics;

+ (id)_currentDoseStringForEndDate:(id)a0 earliestStartDate:(id)a1 profile:(id)a2;
+ (id)_makeBucketsForNowDate:(id)a0 earliestStartDate:(id)a1 profile:(id)a2;
+ (id)_makePrimaryCalculator;
+ (id)_makeDataSourceWithProfile:(id)a0;
+ (id)_makeSourceOrderProviderWithProfile:(id)a0;
+ (id)_makeJournaledCalculator;
+ (id)makeBucketsForProfile:(id)a0 earliestStartDate:(id)a1;
+ (id)bucketForArchivedRepresentation:(id)a0 profile:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)archivedRepresentationWithError:(id *)a0;
- (id)queryForInitialStatisticsWithError:(id *)a0;
- (id)copyWithEarliestStartDate:(id)a0 resetDoseToZero:(BOOL)a1 error:(id *)a2;
- (id)snapshotStatisticsWithError:(id *)a0;
- (BOOL)isExpiredForNowDate:(id)a0;
- (id)updateWithSampleBatch:(id)a0 error:(id *)a1;
- (id)_initWithProfile:(id)a0 startDate:(id)a1 earliestStartDate:(id)a2 boundedInterval:(BOOL)a3;
- (id)_lock_copyWithEarliestStartDate:(id)a0 resetDoseToZero:(BOOL)a1 error:(id *)a2;
- (id)_lock_currentStatisticsWithError:(id *)a0;
- (id)_lock_archivedRepresentationWithError:(id *)a0;
- (id)_initWithProfile:(id)a0 primaryCalculator:(id)a1 journaledCalculator:(id)a2 startDate:(id)a3 earliestStartDate:(id)a4 boundedInterval:(BOOL)a5 anchor:(id)a6 previousStatistics:(id)a7 includesPrunableData:(BOOL)a8;
- (id)_lock_dateInterval;
- (id)_lock_queryForInitialStatisticsWithError:(id *)a0;
- (id)_lock_journalQuantitySamples:(id)a0 error:(id *)a1;
- (id)_lock_addQuantitySamples:(id)a0 anchor:(id)a1 error:(id *)a2;
- (id)_lock_fetchIncludesPrunableDataWithError:(id *)a0;

@end
