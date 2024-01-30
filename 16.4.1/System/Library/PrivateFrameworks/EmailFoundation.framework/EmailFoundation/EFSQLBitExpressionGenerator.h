@protocol EFSQLValueExpressable;

@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator

@property (readonly, nonatomic) id<EFSQLValueExpressable> bitExpression;

- (void).cxx_destruct;
- (void)bitExpressionWithKeyColumn:(id)a0;
- (id)initWithTableRelationship:(id)a0 whereExpression:(id)a1 previousExpressionGenerator:(id)a2 bitExpression:(id)a3;

@end
