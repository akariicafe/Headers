@class NSSQLEntity, NSExpression, NSArray;

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}

- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initForIndexNamed:(id)a0 onEntity:(id)a1 properties:(id)a2 ranges:(id)a3 inScope:(id)a4;

@end
