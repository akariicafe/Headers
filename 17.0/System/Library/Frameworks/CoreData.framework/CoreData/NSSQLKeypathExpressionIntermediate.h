@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate {
    BOOL _substitutePK;
}

- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)generateSQLStringInContext:(id)a0;

@end
