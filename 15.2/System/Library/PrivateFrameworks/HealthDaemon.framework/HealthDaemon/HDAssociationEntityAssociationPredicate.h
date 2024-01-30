@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate {
    long long _assocationID;
}

+ (id)predicateWithAssociationID:(long long)a0;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;

@end
