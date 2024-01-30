@class NSDictionary, MGOutstandingQuery, MGGroupsQueryAgent;

@interface MGGroupsQueryOperation : NSOperation

@property (readonly, copy, nonatomic) NSDictionary *groups;
@property (readonly, copy, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) MGGroupsQueryAgent *agent;
@property (readonly, copy, nonatomic) MGOutstandingQuery *query;

- (void)main;
- (void).cxx_destruct;
- (id)initWithAgent:(id)a0 query:(id)a1 groups:(id)a2 substitutionVariables:(id)a3;

@end
