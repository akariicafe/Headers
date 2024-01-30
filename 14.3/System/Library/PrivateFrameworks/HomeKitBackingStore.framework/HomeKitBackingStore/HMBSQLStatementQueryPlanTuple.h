@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject

@property (readonly, nonatomic) int row;
@property (readonly, nonatomic) int parent;
@property (readonly, nonatomic) NSString *detail;

- (void).cxx_destruct;
- (id)initWithRow:(id)a0;

@end
