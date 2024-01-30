@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLExpressable> left;
@property (readonly, nonatomic) BOOL between;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

- (id)ef_SQLIsolatedExpression;
- (id)initWithLeft:(id)a0 firstValue:(id)a1 secondValue:(id)a2 between:(BOOL)a3;
- (void)setColumnExpression:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void).cxx_destruct;

@end
