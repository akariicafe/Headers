@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueExpressable:(id)a0;
+ (id)parenthesizedValueCollectionExpressable:(id)a0;

- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (void).cxx_destruct;
- (id)initWithExpressable:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
