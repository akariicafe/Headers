@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate {
    BOOL _inverted;
}

+ (id)predicateWithInvertedCondition:(BOOL)a0;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
