@class NSExpression;

@interface NSSQLExpressionIntermediate : NSSQLIntermediate {
    NSExpression *_expression;
    BOOL _allowToMany;
}

- (id)initWithExpression:(id)a0 allowToMany:(BOOL)a1 inScope:(id)a2;

@end
