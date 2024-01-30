@class NSString, HDProfile, HKCalendarCache;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepPeriodSegmentArrayBuilder : NSObject <HDSleepPeriodSegmentArrayBuilding> {
    HDProfile *_profile;
    long long _morningIndex;
    unsigned long long _options;
    HKCalendarCache *_calendarCache;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)sleepPeriodSegmentsFromSamples:(id)a0;
- (id)initProfile:(id)a0 morningIndex:(long long)a1 options:(unsigned long long)a2 calendarCache:(id)a3 sourceOrderProvider:(id)a4;

@end
