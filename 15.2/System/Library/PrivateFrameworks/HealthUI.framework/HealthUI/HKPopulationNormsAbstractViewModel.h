@class NSNumber, HKHealthStore, NSObject;
@protocol OS_dispatch_queue;

@interface HKPopulationNormsAbstractViewModel : NSObject <HKPopulationNormsViewModelDataSource>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleQueryQueue;
@property (retain, nonatomic) NSNumber *cacheBiologicalSexSegmentIndex;
@property (retain, nonatomic) NSNumber *cacheClassificationIndex;
@property (retain, nonatomic) NSNumber *cacheAgeInYears;
@property (retain, nonatomic) NSNumber *cacheLatestSampleValue;
@property (retain, nonatomic) NSNumber *userHasDataPointAvailable;

- (id)initWithHealthStore:(id)a0;
- (id)viewTitle;
- (id)footerText;
- (void).cxx_destruct;
- (void)_requireConcreteImplementationOfSelector:(SEL)a0;
- (unsigned long long)currentClassificationIndex;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)a0;
- (id)localizedClassificationTitleForIndex:(unsigned long long)a0;
- (id)localizedClassificationNameForIndex:(unsigned long long)a0;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (long long)_biologicalSexForSexSegmentIndex:(unsigned long long)a0;
- (unsigned long long)_biologicalSexSegmentIndexForSex:(long long)a0;
- (unsigned long long)numberOfBiologicalSexSegments;
- (id)userLatestSampleValue;
- (id)currentAgeInYears;
- (id)classificationIndexForSampleValue:(double)a0 age:(long long)a1 sex:(long long)a2;
- (unsigned long long)numberOfClassifications;
- (id)currentDataForBiologicalSex;
- (id)associatedSampleType;
- (id)seriesHighlightedColor;
- (id)chartTitle;
- (id)levelsTitle;
- (id)quantityUnitTitle;
- (id)ageBucketsTitle;
- (id)seriesHighlightedSegmentColor;
- (id)localizedBiologicalSexTitles;
- (BOOL)shouldShowClassificationTitle;
- (id)currentLocalizedClassificationTitle;
- (id)currentLocalizedClassificationName;
- (id)currentLocalizedClassificationDescription;
- (long long)currentBiologicalSex;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)a0;
- (BOOL)isCurrentClassificationAvailable;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)a0;
- (void)setClassificationIndex:(unsigned long long)a0;
- (id)userAgeBucketIndex;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)maximumSampleValueQuantity;
- (double)minimumSampleValueQuantity;
- (void)clearUserCharacteristicCache;
- (void)prepareUserCharacteristicCacheWithHandler:(id /* block */)a0;

@end
