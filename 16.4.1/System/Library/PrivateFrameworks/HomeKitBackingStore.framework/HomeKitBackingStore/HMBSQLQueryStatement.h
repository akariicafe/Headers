@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement

@property (readonly, nonatomic) NSDictionary *arguments;

- (id)initWithContext:(id)a0 statement:(struct sqlite3_stmt { } *)a1 queryPlans:(id)a2 arguments:(id)a3;
- (id)initWithContext:(id)a0 statement:(id)a1;
- (void).cxx_destruct;

@end
