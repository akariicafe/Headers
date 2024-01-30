@class NSMutableArray, NSDate;

@interface PKPayLaterFinancingPlansFetcherRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly, nonatomic) NSDate *startDate;

- (void).cxx_destruct;
- (void)callCompletionsWithResult:(id)a0;
- (BOOL)coalesceRequest:(id)a0;
- (id)initWithStartDate:(id)a0 completion:(id /* block */)a1;

@end
