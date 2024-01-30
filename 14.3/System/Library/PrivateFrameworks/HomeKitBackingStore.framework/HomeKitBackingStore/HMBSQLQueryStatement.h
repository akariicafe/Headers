@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement

@property (readonly, nonatomic) NSDictionary *arguments;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 statement:(id)a1;
- (id)initWithContext:(id)a0 statement:(struct sqlite3_stmt { } *)a1 queryPlans:(id)a2 arguments:(id)a3;

@end
