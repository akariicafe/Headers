@class HKQuantity, NSArray, NSDate, HKQuantityType;

@interface FIQuantityTimeSlice : NSObject {
    NSArray *_uncommittedSamples;
    NSDate *_lastCommitDate;
}

@property (readonly, nonatomic) BOOL finalized;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) HKQuantity *committedTotal;
@property (readonly, nonatomic) HKQuantity *committedAndAddedTotal;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)committingUntilDate:(id)a0;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1;
- (id)addingSample:(id)a0 error:(id *)a1;
- (id)addingSamples:(id)a0 error:(id *)a1;
- (id)settingEndDate:(id)a0;
- (id)_totalByCommittingSample:(id)a0 toPreviousTotal:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)initWithQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2 uncommitedSamples:(id)a3 lastCommitDate:(id)a4 committedTotal:(id)a5 finalized:(BOOL)a6;
- (id)_commitingSamples:(id)a0 toPreviousCommittedTotal:(id)a1 untilDate:(id)a2 startDate:(id)a3 endDate:(id)a4;

@end
