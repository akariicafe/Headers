@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate

- (BOOL)isFunctionScoped;
- (id)generateSQLStringInContext:(id)a0;

@end
