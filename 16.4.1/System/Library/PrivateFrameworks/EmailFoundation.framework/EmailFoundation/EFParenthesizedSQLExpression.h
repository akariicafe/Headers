@interface EFParenthesizedSQLExpression : NSObject {
    id _expressable;
}

+ (id)parenthesizedValueCollectionExpressable:(id)a0;
+ (id)parenthesizedValueExpressable:(id)a0;

- (id)ef_SQLIsolatedExpression;
- (id)initWithExpressable:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0 conjoiner:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (id)ef_SQLExpression;
- (void).cxx_destruct;

@end
