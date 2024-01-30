@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {
    void *_group;
    void *_store;
}

@property (nonatomic) void *group;
@property (nonatomic) void *store;
@property (copy, nonatomic) NSString *accountIdentifier;

- (id)description;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (void)dealloc;
- (BOOL)isValid;

@end
