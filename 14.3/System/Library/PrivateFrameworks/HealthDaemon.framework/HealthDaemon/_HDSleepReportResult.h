@class NSArray, NSDateInterval, NSDictionary, NSDate, NSCalendar;

@interface _HDSleepReportResult : NSObject {
    NSDictionary *_inBedSamplesBySource;
    NSDateInterval *_dateInterval;
    NSCalendar *_calendar;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *sources;
@property (readonly, nonatomic) BOOL usedAppleBedtimeAlarm;
@property (readonly, nonatomic) double appleBedtimeCorrection;
@property (readonly, nonatomic) double appleBedtimeDeltaFromSleepDayStart;
@property (readonly, nonatomic) NSDate *appleBedtime;
@property (readonly, nonatomic) NSDate *appleWaketime;
@property (readonly, nonatomic) NSDate *appleCorrectedBedtime;
@property (readonly, nonatomic) double appleTotalInBedTime;
@property (readonly, nonatomic) NSDate *appleFirstSleepInterruption;
@property (readonly, nonatomic) NSDate *appleStartOfLongestSleepInterval;
@property (readonly, nonatomic) NSDate *appleFinalWakeupTime;

+ (id)_correctedDateFromDate:(id)a0 dateInterval:(id)a1 calendar:(id)a2;

- (void).cxx_destruct;
- (id)deviceForSource:(id)a0;
- (id)sleepOnsetForSource:(id)a0;
- (id)finalWakeupForSource:(id)a0;
- (id)_firstAppleInBedSample;
- (id)_lastEndDateInSampleArray:(id)a0;
- (id)initWithDateInterval:(id)a0 inBedSamplesBySource:(id)a1 calendar:(id)a2;

@end
