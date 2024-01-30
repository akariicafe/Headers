@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (id)_generateSQLForWildSubStringForGlob:(id)a0 wildStart:(BOOL)a1 wildEnd:(BOOL)a2;
- (id)_generateSQLEndsWithStringInContext:(id)a0;
- (id)_generateSQLType2InContext:(id)a0;
- (id)_upperBoundSearchStringForString:(id)a0 context:(id)a1;
- (id)_entityDestinationIfKeyOfSomeSort:(id)a0;
- (void)dealloc;
- (long long)_cfStringOptionsFromPredicateOptions:(unsigned long long)a0;
- (id)_generateSQLBetweenStringInContext:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;
- (id)_generateSQLForConst:(id)a0 inAttribute:(id)a1 expression:(id)a2 inContext:(id)a3;
- (id)_generateSQLSubstringWildStart:(BOOL)a0 wildEnd:(BOOL)a1 inContext:(id)a2;
- (id)_prefetchSourceOfUnidirectionalVirtualInverse:(id)a0;
- (id)_generateSQLForConst:(id)a0 inToMany:(id)a1 inContext:(id)a2;
- (id)_generateSQLBoundByStringInContext:(id)a0;
- (id)_generateSQLForConstKeyArray:(id)a0 targetEntity:(id)a1 reboundFrom:(id)a2 inContext:(id)a3;
- (id)_generateSQLForString:(id)a0 expressionPath:(id)a1 wildStart:(BOOL)a2 wildEnd:(BOOL)a3 allowToMany:(BOOL)a4 inContext:(id)a5;
- (id)_lastScopedItem;
- (id)_generateSQLForMatchingOperator:(id)a0 inContext:(id)a1;
- (BOOL)isWhereScoped;
- (id)_generateSQLType3InContext:(id)a0;
- (id)_generateSQLForConst:(id)a0 inManyToMany:(id)a1 expression:(id)a2 inContext:(id)a3;
- (BOOL)_isNilExpression:(id)a0;
- (id)_generateSQLContainmentStringInContext:(id)a0;
- (id)_generateSQLType1InContext:(id)a0;
- (id)_sqlTokenForPredicateOperator:(unsigned long long)a0 inContext:(id)a1;
- (id)_generateSQLBeginsWithStringInContext:(id)a0;

@end
