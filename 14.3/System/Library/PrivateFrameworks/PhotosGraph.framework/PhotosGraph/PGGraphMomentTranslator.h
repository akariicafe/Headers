@interface PGGraphMomentTranslator : PGGraphEntityTranslator

+ (id)entityClassName;

- (id)graphChangesForDeletedIdentifiers:(id)a0 progressBlock:(id /* block */)a1;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)a0 change:(id)a1 progressBlock:(id /* block */)a2;
- (id)momentUpdateTypeByMomentProperty;
- (id)highlightUpdateTypeByMomentProperty;
- (id)graphChangesForInsertedIdentifiers:(id)a0 progressBlock:(id /* block */)a1;

@end
