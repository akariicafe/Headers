@class NSMutableDictionary, NSCalendar, NSDateInterval;

@interface _HDSleepReportBuilder : NSObject {
    NSDateInterval *_resultInterval;
    NSCalendar *_calendar;
    NSMutableDictionary *_inBedSamplesBySource;
}

- (void).cxx_destruct;
- (id)_categorySampleBufferForSource:(id)a0;
- (void)addSleepSamples:(id)a0;
- (id)calculateResult;
- (id)initWithResultInterval:(id)a0 calendar:(id)a1;

@end
