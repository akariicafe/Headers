@interface HDAssociationEntityAssociationExistsPredicate : HDSQLitePredicate {
    long long _assocationID;
    BOOL _exists;
}

+ (id)predicateWithAssociationID:(long long)a0 exists:(BOOL)a1;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)SQLForEntityClass:(Class)a0;
- (id)description;

@end
