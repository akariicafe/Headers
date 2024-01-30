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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_SQLForSelectWithProperties:(id)a0;
- (id)_SQLForSelectWithProperties:(id)a0 columns:(id)a1;
- (id)_SQLForDeleteWithError:(id *)a0;
- (id)_sortedJoinClauses:(id)a0 preferredOrder:(id)a1 baseTables:(id)a2;
- (id /* block */)_joinClauseComparatorWithPreferredEntityOrder:(id)a0;
- (id)_joinClauseForProperties:(id)a0;

@end
