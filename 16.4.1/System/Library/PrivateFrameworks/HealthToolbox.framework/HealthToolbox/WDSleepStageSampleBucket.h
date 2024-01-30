@class NSString, HKSourceRevision, HKDevice, WDTimePeriod, HKSortedSampleArray, NSArray, NSPredicate;

@interface WDSleepStageSampleBucket : NSObject <WDDataListDataObjectSource>

@property (readonly, nonatomic) unsigned long long sortNumber;
@property (readonly, nonatomic) HKSourceRevision *sourceRevision;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) HKSortedSampleArray *sortedSamples;
@property (readonly, nonatomic) long long sleepStage;
@property (readonly, nonatomic) WDTimePeriod *timePeriod;
@property (readonly, nonatomic) NSArray *samples;
@property (readonly, nonatomic) unsigned long long numberOfSamples;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSample:(id)a0;
- (void).cxx_destruct;
- (id)source;
- (void)removeAllSamples;
- (void)removeSample:(id)a0;
- (id)initWithSleepStage:(long long)a0 timePeriod:(id)a1 sourceRevision:(id)a2 device:(id)a3;

@end
