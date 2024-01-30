@class NSString;
@protocol EFSQLExpressable;

@interface EFSQLBitExpression : NSObject <EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) id<EFSQLExpressable> right;
@property (readonly, nonatomic) unsigned long long bitwiseOperator;
@property (retain, nonatomic) id<EFSQLExpressable> left;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

+ (id)and:(id)a0 with:(id)a1;
+ (id)leftShift:(id)a0 by:(id)a1;
+ (id)rightShift:(id)a0 by:(id)a1;
+ (id)or:(id)a0 with:(id)a1;

- (id)ef_SQLIsolatedExpression;
- (id)initWithLeft:(id)a0 bitwiseOperator:(unsigned long long)a1 right:(id)a2;
- (void).cxx_destruct;
- (void)setColumnExpression:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;

@end
