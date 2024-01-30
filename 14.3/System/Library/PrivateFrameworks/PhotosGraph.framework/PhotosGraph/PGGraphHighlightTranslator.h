@interface PGGraphHighlightTranslator : PGGraphEntityTranslator

+ (id)entityClassName;
+ (BOOL)includesRelationshipChanges;

- (id)graphChangesForDeletedIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)graphChangesForInsertedIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)highlightUpdateDateProperties;
- (id)highlightUpdateTypeProperties;

@end
