@class NSString, NSArray;

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery

@property (readonly, nonatomic) NSString *indexNameSuffix;
@property (readonly, nonatomic) NSArray *indexedColumns;
@property (readonly, nonatomic) NSString *indexName;

+ (id)queryWithSQLPredicate:(id)a0 ascending:(BOOL)a1 indexedProperties:(id)a2 arguments:(id)a3;

- (void).cxx_destruct;
- (BOOL)hasExpectedIndexes;
- (id)initWithSQLPredicate:(id)a0 sqlColumns:(id)a1 initialSequence:(id)a2 maximumRowsPerSelect:(unsigned long long)a3 indexNameSuffix:(id)a4 indexedColumns:(id)a5 arguments:(id)a6;

@end
