@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface IMDPredicateToSQLConverter : NSObject {
    NSMutableArray *_foundParameters;
}

@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSString *expression;

- (id)init;
- (void).cxx_destruct;
- (void)bindParametersToSqliteWithStatement:(struct CSDBSqliteStatement { struct CSDBSqliteConnection *x0; struct sqlite3_stmt *x1; int x2; } *)a0;
- (id)initWithPredicate:(id)a0 keyPathsToColumns:(id)a1;

@end
