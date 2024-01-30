@class NSArray;

@interface HDSQLiteQueryPlan : NSObject

@property (readonly, copy, nonatomic) NSArray *queryPlanRows;
@property (readonly, nonatomic) BOOL includesTableScan;
@property (readonly, nonatomic) BOOL usesIndex;
@property (readonly, nonatomic) BOOL usesCoveringIndex;
@property (readonly, nonatomic) NSArray *indices;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryPlanRows:(id)a0;

@end
