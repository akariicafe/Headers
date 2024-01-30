@class HKQuantity, NSArray, NSDate, HKQuantityType;

@interface FITrailingQuantityTimeSlice : NSObject {
    NSArray *_uncommittedSamples;
    NSDate *_lastCommitDate;
}

@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *committedSamples;
@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) HKQuantity *committedTotal;
@property (readonly, nonatomic) double committedDuration;
@property (readonly, nonatomic) HKQuantity *committedAndAddedTotal;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2 committedSamples:(id)a3 uncommittedSamples:(id)a4 lastCommitDate:(id)a5 committedTotal:(id)a6 finalized:(BOOL)a7;
- (id)autoCommitDateForSamples:(id)a0;
- (id)_commitingSamples:(id)a0 toPreviousCommittedTotal:(id)a1 toPreviousCommittedSamples:(id)a2 untilDate:(id)a3 startDate:(id)a4 endDate:(id)a5;
- (id)committingUntilDate:(id)a0;
- (id)settingStartDate:(id)a0;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1;
- (double)activeDurationUntilDate:(id)a0;
- (id)addingSample:(id)a0 error:(id *)a1;
- (id)addingSamples:(id)a0 error:(id *)a1;
- (id)settingEndDate:(id)a0;
- (id)settingTotalQuantityLimit:(id)a0;
- (id)_totalByCommittingSample:(id)a0 toPreviousTotal:(id)a1 startDate:(id)a2 endDate:(id)a3;

@end
