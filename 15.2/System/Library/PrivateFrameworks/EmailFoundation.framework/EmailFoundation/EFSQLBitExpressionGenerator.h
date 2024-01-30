@protocol EFSQLValueExpressable;

@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator

@property (readonly, nonatomic) id<EFSQLValueExpressable> bitExpression;

- (void).cxx_destruct;
- (id)initWithTableRelationship:(id)a0 whereExpression:(id)a1 previousExpressionGenerator:(id)a2 bitExpression:(id)a3;
- (void)bitExpressionWithKeyColumn:(id)a0;

@end
