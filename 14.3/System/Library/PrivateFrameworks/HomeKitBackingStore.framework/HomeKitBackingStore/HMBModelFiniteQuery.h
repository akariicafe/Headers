@interface HMBModelFiniteQuery : HMBModelIndexedQuery

+ (id)queryWithSQLPredicate:(id)a0 maximumRowsReturned:(unsigned long long)a1 indexedProperties:(id)a2 arguments:(id)a3;

- (id)indexName;
- (id)performQueryOn:(id)a0 arguments:(id)a1;

@end
