@interface HDAssociationEntityParentIDExistsPredicate : HDSQLitePredicate {
    long long _parentID;
    BOOL _exists;
}

+ (id)predicateWithParentID:(long long)a0 exists:(BOOL)a1;

- (id)SQLForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)description;

@end
