@class NSExpression, NSMutableArray;

@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate {
    NSMutableArray *_comparisonPredicateScopedItem;
    NSExpression *_effectiveLeftExpression;
    NSExpression *_effectiveRightExpression;
}

- (BOOL)isWhereScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)_lastScopedItem;
- (id)initWithPredicate:(id)a0 inScope:(id)a1;

@end
