@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate

+ (BOOL)functionIsAcceptableAsAggregate:(id)a0;

- (id)_generateDistinctStringInContext:(id)a0;
- (id)_generateLengthStringInContext:(id)a0;
- (id)_generateRtreeIndexStringInContext:(id)a0;
- (id)generateType2SQLString:(id)a0 inContext:(id)a1;
- (id)_generateSQLForCountInContext:(id)a0;
- (id)_generateType4SQLForSymbol:(id)a0 inContext:(id)a1;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isFunctionScoped;
- (id)_generateCorrelatedSubqueryStringWithSymbol:(id)a0 forExpression:(id)a1 inContext:(id)a2;
- (id)generateType1SQLString:(id)a0 inContext:(id)a1;
- (id)_generateArgumentStringForCollection:(id)a0 inContext:(id)a1;
- (id)_generateSelectForAggregateStringWithSymbol:(id)a0 argument:(id)a1 inContext:(id)a2;
- (id)generateType3SQLString:(id)a0 keypathOnly:(BOOL)a1 inContext:(id)a2;
- (id)_generateUncorrelatedSubqueryStringWithSymbol:(id)a0 forAttribute:(id)a1 inContext:(id)a2;
- (id)_generateNowStringInContext:(id)a0;
- (id)_generateMathStringWithSymbol:(id)a0 inContext:(id)a1;

@end
