@class NSMutableSet, NSDate;

@interface ATXCandidateRelevanceModelDataStoreDatasetMetadataTracker : NSObject {
    unsigned long long _numberOfPositiveSamples;
    NSMutableSet *_seenDatesWithPositiveSamples;
    NSMutableSet *_seenDatesWithSamples;
    unsigned long long _numberOfSamples;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)yearMonthDayComponentsForDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)currentMetadata;
- (void)observeDataPoint:(id)a0;

@end
