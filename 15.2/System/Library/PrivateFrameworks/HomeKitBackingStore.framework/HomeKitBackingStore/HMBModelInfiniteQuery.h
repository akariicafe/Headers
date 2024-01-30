@class NSString;

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery

@property (readonly, copy) NSString *sequenceArgumentName;

+ (id)queryWithSQLPredicate:(id)a0 sequenceArgumentName:(id)a1 indexedProperties:(id)a2 arguments:(id)a3;

- (id)performQueryOn:(id)a0 arguments:(id)a1;
- (void).cxx_destruct;
- (id)initWithSQLPredicate:(id)a0 sqlColumns:(id)a1 sequenceArgumentName:(id)a2 maximumRowsPerSelect:(unsigned long long)a3 indexNameSuffix:(id)a4 indexedColumns:(id)a5 arguments:(id)a6;

@end
