@class NSArray, HMBSQLContext;

@interface HMBSQLStatement : HMFObject

@property (class, nonatomic) BOOL explainStatements;

@property (nonatomic) struct sqlite3_stmt { } *statement;
@property (readonly, weak, nonatomic) HMBSQLContext *context;
@property (readonly, nonatomic) NSArray *queryPlans;

+ (id)queryPlansForContext:(id)a0 statement:(id)a1;
+ (struct sqlite3_stmt { } *)sqlStatementForContext:(id)a0 statement:(id)a1;

- (void)finalize;
- (id)initWithContext:(id)a0 statement:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 statement:(struct sqlite3_stmt { } *)a1 queryPlans:(id)a2;

@end
