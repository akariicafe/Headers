@class NSString, NSMutableArray, NSArray;
@protocol EFSQLValueExpressable;

@interface EFSQLSelectStatement : NSObject <EFSQLValueCollectionExpressable, EFSQLSelectComponent>

@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) NSMutableArray *joinExpressions;
@property (retain, nonatomic) NSArray *groupExpressions;
@property (readonly, nonatomic) NSMutableArray *orderExpressions;
@property (nonatomic) BOOL distinct;
@property (retain, nonatomic) id<EFSQLValueExpressable> where;
@property (nonatomic) unsigned long long limit;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ef_SQLIsolatedExpression;
- (void)addResultColumn:(id)a0 fromTable:(id)a1;
- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)join:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (id)initWithResultColumn:(id)a0 table:(id)a1;
- (void)groupBy:(id)a0;
- (void)orderBy:(id)a0 ascending:(BOOL)a1;
- (id)leftOuterJoin:(id)a0 sourceColumn:(id)a1 targetColumn:(id)a2;
- (void)groupByColumn:(id)a0;
- (void)orderByColumn:(id)a0 fromTable:(id)a1 ascending:(BOOL)a2;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (void)addResult:(id)a0 alias:(id)a1;
- (void)orderByColumn:(id)a0 ascending:(BOOL)a1;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)addResultColumn:(id)a0;
- (void)groupByColumn:(id)a0 fromTable:(id)a1;
- (id)leftOuterJoin:(id)a0 on:(id)a1;
- (id)join:(id)a0 alias:(id)a1 on:(id)a2;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (id)join:(id)a0 alias:(id)a1 sourceColumn:(id)a2 targetColumn:(id)a3;
- (id)initWithResultColumn:(id)a0;
- (id)initWithResult:(id)a0 table:(id)a1;
- (id)join:(id)a0 on:(id)a1;
- (id)leftOuterJoin:(id)a0 alias:(id)a1 on:(id)a2;

@end
