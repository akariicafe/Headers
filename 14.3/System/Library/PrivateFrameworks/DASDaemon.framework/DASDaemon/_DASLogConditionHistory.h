@class NSMutableArray;

@interface _DASLogConditionHistory : NSObject

@property (retain, nonatomic) NSMutableArray *conditions;
@property (retain, nonatomic) NSMutableArray *intervals;

+ (id)condition:(id)a0 fromDate:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCondition:(id)a0 fromDate:(id)a1;
- (void)addCondition:(id)a0 atDate:(id)a1;
- (id)idealIntervals;

@end
