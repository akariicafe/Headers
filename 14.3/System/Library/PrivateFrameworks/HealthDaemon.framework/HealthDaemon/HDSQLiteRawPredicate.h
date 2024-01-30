@class NSString, NSArray;

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}

+ (id)predicateWithSQL:(id)a0 overProperties:(id)a1 values:(id)a2;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
