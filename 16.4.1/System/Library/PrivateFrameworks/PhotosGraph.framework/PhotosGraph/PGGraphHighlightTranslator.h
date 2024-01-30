@interface PGGraphHighlightTranslator : PGGraphEntityTranslator

+ (id)entityClassName;
+ (BOOL)includesRelationshipChanges;

- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)graphChangesForDeletedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)graphChangesForInsertedLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)highlightUpdateDateProperties;
- (id)highlightUpdateTypeProperties;

@end
