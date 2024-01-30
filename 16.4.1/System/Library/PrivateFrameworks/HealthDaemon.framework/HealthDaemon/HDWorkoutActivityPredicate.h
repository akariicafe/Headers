@class HDSQLitePredicate;

@interface HDWorkoutActivityPredicate : HDSQLitePredicate {
    HDSQLitePredicate *_subPredicate;
}

+ (id)predicateForSubPredicate:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (void).cxx_destruct;

@end
