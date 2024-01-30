@class NSArray, HDSQLitePredicate, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL shouldExpandLastSQLStatement;
@property (nonatomic) Class entityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSArray *orderingTerms;
@property (nonatomic) BOOL returnsDistinctEntities;
@property (copy, nonatomic) HDSQLitePredicate *predicate;
@property (copy, nonatomic) NSString *groupBy;
@property (copy, nonatomic) NSArray *preferredEntityJoinOrder;

- (id)_joinClauseForProperties:(id)a0;
- (id)selectSQLForProperties:(id)a0;
- (id)_sortedJoinClauses:(id)a0 preferredOrder:(id)a1 baseTables:(id)a2;
- (void)bindToDeleteStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_SQLForDeleteWithError:(id *)a0;
- (void)bindToSelectStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)_SQLForSelectWithProperties:(id)a0 columns:(id)a1;
- (void).cxx_destruct;

@end
