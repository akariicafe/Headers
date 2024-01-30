@class NSSQLEntity, NSExpression, NSArray;

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}

- (void)dealloc;
- (BOOL)_validateCollection:(id)a0 context:(id)a1;
- (BOOL)_validateExpression:(id)a0 context:(id)a1;
- (id)initForIndexNamed:(id)a0 onEntity:(id)a1 properties:(id)a2 ranges:(id)a3 inScope:(id)a4;
- (id)generateSQLStringInContext:(id)a0;

@end
