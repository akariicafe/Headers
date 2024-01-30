@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (BOOL)isWhereScoped;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;
- (id)_lastScopedItem;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
